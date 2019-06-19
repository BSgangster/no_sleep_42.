from os import listdir
from os.path import isfile, join

c_files  = [f for f in listdir('.') if isfile(join('.',f))]

dir_len = len(c_files)
counter = 0
header_file = 'libft.h'
proto_list = []

def find_all_proto(file_name):
    counter = 0
    proto_list = []
    file_c = open(file_name,'r')
    string1 = file_c.read()
    y = ''
    x = string1.split('{')
    for i in string1.split('{'):
        counter = 0
        while counter < len(i.split('\n')):
            if not(i.split('\n')[counter] == [] or ';' in i.split('\n')[counter] or 'include' in i.split('\n')[counter] or '/*' in i.split('\n')[counter] or 'while' in  i.split('\n')[counter] or 'if' in i.split('\n')[counter] or 'if else' in i.split('\n')[counter] or 'else' in i.split('\n')[counter] or '}' in i.split('\n')[counter] or '/w' in i.split('\n')[counter] or '&&' in i.split('\n')[counter] or '||' in i.split('\n')[counter] or 'malloc' in i.split('\n')[counter] or 'sizeof' in i.split('\n')[counter]) and ('void' in i.split('\n')[counter] or 'int' in i.split('\n')[counter] or 'char' in i.split('\n')[counter] or 'size_t' in i.split('\n')[counter] or 'long long int' in i.split('\n')[counter] or 't_list' in i.split('\n')[counter]):
                y = i.split('\n')[counter]
                if len(y) > 1:
                    prototype = y[:len(y)]
                    proto_list.append(prototype)
            counter+=1
    return proto_list

while counter < dir_len:
    if c_files[counter] == 'Makefile':
        counter += 1
        continue
    if c_files[counter].split('.')[1] == 'c':
        proto_list =  proto_list + find_all_proto(c_files[counter])
    counter += 1

counter = 0
header_file  = open('libft.h', 'w')

#header file stuff
header_file.write('#ifndef LIBFT_H' + '\n')
header_file.write('# define LIBFT_H' + '\n')
header_file.write('\n')

#including the header files
header_file.write('//Place your imports/includes over here' + '\n')
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
