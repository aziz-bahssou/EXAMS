#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	if(ac != 2)
	{
		write(1, "\n",1);
		return(0);
	}
	i = 0;
	while(av[1][i])
	{
		if(av[1][i] >= 'a' && av[1][i] <= 'z')
			av[1][i] = ('a' + 'z') - av[1][i];
		else
			av[1][i] = ('A' + 'Z') - av[1][i];
		i++;
	}
}
