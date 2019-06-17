#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/uio.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define BUFF_SIZE 32

int get_next_line(int fd,char **line);
int bufferreader(int fd,char **line);

#endif