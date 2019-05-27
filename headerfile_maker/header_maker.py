from os import listdir
from os.path import isfile, join

c_files  = [f for f in listdir('.') if isfile(join('.',f))]

dir_len = len(c_files)
counter = 0
header_file = 'libft.h'
proto_list = []

def find_proto(file_name):
    file_c = open(file_name,'r')
    string1 = file_c.read()
    x = string1.split('{')[0]
    y = x.split('\n')
    prototype = y[len(y)-2]
    return prototype

while counter < dir_len:
    if c_files[counter].split('.')[1] == 'c':
        proto_list.append(find_proto(c_files[counter]))
    counter += 1

counter = 0
print proto_list
header_file  = open('libft.h', 'w')

#header file stuff
header_file.write('#ifndef LIBFT_H' + '\n')
header_file.write('# define LIBFT_H' + '\n')
header_file.write('\n')

#including the header files
header_file.write('\\\\Place your imports/includes over here' + '\n')
header_file.write('#include <unistd.h>\n')
header_file.write('#include <stdlib.h>\n')

#defining the structs
x =str(raw_input("Did you do the bonus question?[Y/N] : "))
if x == 'Y':
    header_file.write('typedef struct       s_list\n{\n     void        *content;\n     size_t      content_size;\n     struct s_list       *next;\n}                   t_list;\n')

for i in proto_list:
    header_file.write(proto_list[counter] + ';' + '\n')
    counter += 1

header_file.write('#endif')

header_file.close()
