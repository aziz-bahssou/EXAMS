#include <unistd.h>

int _atoi(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while(str[i])
		res = res * 10 + (str[i++] - '0');
	
	return(res);
}

void _put_nbr(int nb)
{
	char c;
	if(nb > 9)
		_put_nbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c,1);
}

int h_c_d(int a, int b)
{
	int max;
	int i;
	int gcd;

	if(a > b)
		max = a;
	else
		max = b;
	i = 1;
	gcd = 1;
	while(i <= max)
	{
		if(a % i == 0 && b % i == 0)
			gcd = i;
		i++;
	}
	return(gcd);
	
}

#include <stdio.h>

int	main(int ac, char **av)
{
	if(ac != 3)
	{
		write(1, "\n",1);
		return(0);
	}
	_put_nbr(h_c_d(_atoi(av[1]), _atoi(av[2])));
	write(1, "\n",1);
}
