int	ft_atoi(const char *str)
{
	int res;
	int sing;
	int i;
	sing = 1;
	i = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sing = -1;
		i++;
	}
	res = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}

	return(res * sing);
}
#include <stdio.h>

int main(int ac, char **av)
{
	printf("%d", ft_atoi(av[1]));
}	