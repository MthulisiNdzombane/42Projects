#include "libft.h"

long	ft_atol(char *str)
{
	int		i;
	long	result;
	long	sign;

	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	sign = str[i] == '-' ? -1 : 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * sign);
}
