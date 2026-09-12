#include <unistd.h>

int _atoi(char *str)
{
	int res;
	int i;

	res = 0;
	i = 0;
	while(str[i] && str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - '0');
	return(res);
}
int _sum_digit(int nb)
{
	if(nb == 0)
		return(0);
	return ((nb % 10) + _sum_digit(nb / 10));
}
int	main(int ac, char **av)
{
	int res;
	char ch;

	if(ac != 2)
		return(0);

	if(_sum_digit(_atoi(av[1])) > 9)
	{
		res = _sum_digit(_atoi(av[1]));
		ch = _sum_digit(res) + '0';
	}
	write(1, &ch,1);
	write(1, "\n",1);
}

