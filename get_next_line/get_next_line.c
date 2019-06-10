#include "get_next_line.h"

//function reads a file with fd, line by line
int		ft_buffreader(int fd, char **line)
{
	//init
	char	*buff;
	char	*temp;
	int		readline;
	
	//safe guarding
	if (!(buff = (char *)malloc(BUFF_SIZE + 1)))
		return (-1);
	//reading line with file_des
	readline = read(fd, buff, BUFF_SIZE);
	if (readline > 0)
	{
		buff[readline] = '\0';
		if (!(temp = ft_strjoin(*line, buff)))
			return (-1);
		if (**line)
			free(*line);
		*line = temp;
	}
	//freeing the buffer to reduce memory leaks.
	if (*buff)
		free(buff);
	return (readline);
}

int		get_next_line(const int fd, char **line)
{
	//completing next line with a single static variable.
	static char		*buf;
	char			*str;
	int				ret;
	//safe guarding
	if (!buf && !(buf = (char *)malloc(1)))
		return (-1);
	
	while ((str = ft_strchr(buf, '\n')) == NULL)
	{
		if ((ret = ft_buffreader(fd, &buf)) == 0 &&
				(str = ft_strchr(buf, '\n')) == NULL)
		{
			*line = buf;
			return (0);
		}
		else if (ret == -1)
			return (-1);
	}
	if (!(*line = ft_strsub(buf, 0, (str - buf))))
		return (-1);
	str = ft_strdup(str + 1);
	//recording the line with buff
	if (*buf)
		free(buf);
	buf = str;
	return (1);
}
