#include <unistd.h>

int	main(int ac, char **av)
{
	if(ac == 1)
	{
		write(1, "\n",1);
		return(0);
	}
	int i;
	int j;
	i = 1;
	while(i < ac)
	{
		j = 0;
		while(av[i][j])
		{
			if( av[i][j] >= 'A' && av[i][j] <= 'Z')
				av[1][j] += 32;
			if(j == 0 || av[i][j - 1] == ' ')
			{
				if(av[i][j] >= 'a' && av[i][j] <= 'z')
					av[1][j] -= 32;
			}
			write(1, &av[1][j],1);
			j++;
		}
		i++;
	}
}
