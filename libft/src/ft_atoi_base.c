#include "libft.h"

static void		check_num_str(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (((str[i] >= '\0' && str[i] < '0') ||(str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'F')) && str[i] != '-')
			file_error();
		i++;
	}
}

int				ft_atoi_base(char *str, char *base)
{
	int		dec;
	int		i;
	int		j;
	int		y;
	int		sgn;

	j = 0;
	dec = 0;
	sgn = 1;
	check_num_str(str);
	i = ft_strlen(str, '\0') - 1;
	while (str[i] && str[i] != '-' && str[i] != '+' && i >= 0)
	{
		y = 0;
		while (base[y] && str[i] != base[y])
			y++;
		if (y == ft_strlen(base, '\0'))
			y = 0;
		dec += y * power(ft_strlen(base, '\0'), j++);
		i--;
	}
	while (str[i] && i >= 0)
		if (str[i--] == '-')
			sgn *= -1;
	return (dec * sgn);
}
