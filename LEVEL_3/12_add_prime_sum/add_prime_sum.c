#include <unistd.h>

int is_prime(int n)
{
	int i = 2;

	if (n < 2)
		return (0);

	while (i  * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int size = av[1] - '0';
	int i = 0;
	int sum = 0;


	if(ac != 2 || (av[1][0] - '0') <= 0)
	{
		write(1, "\n",1);
		return(0);
	}
	
	while(i < size) 
	{
		if(is_prime(i))
			sum+= i;
		i++;
	}
	char c = (sum + '0');
	write(1, &c, 1);
	write(1, "\n", 1);

	return (0);
}
