#include <unistd.h>

int	main(int ac, char **av)
{
	int arg;
	int i;

	if (ac == 1)
	{
		write(1, "\n",1);
		return(0);
	}
	arg = ac - 1;
	i = 0;
	while (av[arg][i])
	{
		write(1, &av[arg][i], 1);
		i++;
	}
	write(1, "\n",1);
	return(0);
}
