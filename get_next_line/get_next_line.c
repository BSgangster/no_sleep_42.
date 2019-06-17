# include "libft.h"
/*
# include <sys/uio.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define FILE_NAME "text.txt"
# define BUFF_SIZE 32

size_t		ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
char	*ft_strdup(char *str)
{
	char	*dup;
	int		len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	if (!(dup = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (len >= 0)
	{
		dup[len] = str[len];
		len--;
	}
	return (dup);
}

char	*ft_strchr(const char *str, int c)
{
	int		index;

	index = 0;
	while (str[index] != c && str[index] != '\0')
	{
		index += 1;
	}
	if (str[index] == c)
	{
		return ((char *)&str[index]);
	}
	return (NULL);
}

char	*ft_strsub(const char *str, unsigned int n, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	if (!str)
	{
		return (NULL);
	}
	if (!(substr = malloc(len * sizeof(char) + 1)))
		return (NULL);
	while (i < len)
	{
		substr[i] = str[n];
		i++;
		n++;
	}
	substr[i] = '\0';
	return (substr);
}

char	*ft_strjoin(const char *str, const char *str1)
{
	char	*fresh_string;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!str || !str)
		return (NULL);
	if (!(fresh_string = malloc((ft_strlen(str) + \
		ft_strlen(str1)) * sizeof(char) + 1)))
		return (NULL);
	while (str[i])
	{
		fresh_string[i] = str[i];
		i++;
	}
	while (str1[j])
	{
		fresh_string[i] = str1[j];
		j++;
		i++;
	}
	fresh_string[i] = '\0';
	return (fresh_string);
}
*/

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

/*
int main(void)
{
	char *line;
	char *line2;

	line = (char *)malloc((sizeof(char) * 13) + 1);
	line2 = (char *)malloc((sizeof(char) * 13) + 1);
	int file_num = open ("text.txt", O_WRONLY | O_CREAT);
	printf("%d",file_num);
	write(file_num,"This is line\n",13);
	write(file_num,"This is liny\n",13);
	close(file_num);
	file_num = open("text.txt",O_RDONLY);
	printf("%d",file_num);
	get_next_line(file_num, &line);
	get_next_line(file_num, &line2);
	printf("%s",&line[0]);
	printf("%s",&line2[0]);
}
*/