#include "get_next_line.h"

int		ft_buffreader(int fd, char **line)
{
	char	*buff;
	char	*temp;
	int		readline;

	if (!(buff = (char *)malloc(BUFF_SIZE + 1)))
		return (-1);
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
	if (*buff)
		free(buff);
	return (readline);
}

int		get_next_line(const int fd, char **line)
{
	static char		*buf;
	char			*str;
	int				ret;

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
	if (*buf)
		free(buf);
	buf = str;
	return (1);
}
