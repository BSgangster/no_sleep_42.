#include "libft.h"

int	end(char *buf)
{
	int a;

	a = 0;
	while (buf[a] && buf[a] != '\n')
		a++;
	if (buf[a] == '\n')
		return (1);
	return (0);
}

int	get_new_line(const int fd, char *buf, char *store[fd])
{
	int			ret;
	char		*tmp;

	while ((end(buf) != 1) && ((ret = read(fd, buf, BUFF_SIZE)) > 0))
	{
		buf[ret] = '\0';
		tmp = store[fd];
		store[fd] = ft_strjoin(tmp, buf);
		ft_strdel(&tmp);
	}
	ft_strdel(&buf);
	if (ret < 0)
		return (-1);
	return (1);
}

int	get_next_line(const int fd, char **line)
{
	char		*buf;
	static char	*store[2147483647];
	char		*tmp;
	char		*str;
	int			ret;

	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	buf = ft_strnew(BUFF_SIZE);
	if (!store[fd])
		store[fd] = ft_strnew(0);
	if ((ret = get_line(fd, buf, store)) == -1)
		return (-1);
	if ((str = ft_strchr(store[fd], '\n')))
	{
		*line = ft_strsub(store[fd], 0, str - store[fd]);
		tmp = store[fd];
		store[fd] = ft_strdup(str + 1);
		ft_strdel(&tmp);
		return (1);
	}
	*line = ft_strdup(store[fd]);
	ft_strdel(&store[fd]);
	return (ft_strlen(*line) > 0 ? 1 : 0);
}
