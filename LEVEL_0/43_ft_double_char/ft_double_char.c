#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	int k;
	if(ac != 2)
	{
		write(1, "\n",1);
		return(0);
	}

	i = 0;
	while(av[1][i])
	{
		k = 0;
		while(k++ < 2)
			write(1, &av[1][i], 1);
		
		i++;
	}
	write(1, "\n",1);
	return(0);
}