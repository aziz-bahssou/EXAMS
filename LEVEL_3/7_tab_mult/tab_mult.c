#include <unistd.h>
char _putchar(char c)
{
	write(1, &c, 1);
}

void _put_nbr(int nb)
{
	if(nb >= 10)
		_put_nbr(nb / 10);
	_putchar((nb % 10) + '0');
}

int ft_atoi(char *str)
{
	int i = 0;
	int res;

	res = 0;
	
	while(str[i])
		res = res * 10 +(str[i++] - '0');
	
	return(res);
}
int	main(int ac, char **av)
{
	if(ac != 2)
		return(0);
	int i;
	int nb;

	nb = ft_atoi(av[1]);
	i = 1;

	while(i <= 9)
	{
		_put_nbr(i);
		write(1, " ",1);
		write(1, "x",1);
		write(1, " ",1);
		_put_nbr(nb);
		write(1, " ",1);
		write(1, "=",1);
		write(1, " ",1);
		_put_nbr(i * nb);
		write(1, "\n", 1);
		i++;
	}
	return(0);
}
