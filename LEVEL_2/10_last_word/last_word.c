#include <unistd.h>
int _leen(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return(i);
}

int	main(int ac, char **av)
{
	if(ac != 2 || av[1][0] == '\0')
	{
		write(1, "\n", 1);
		return(0);
	}
	int i;
	int j;

	i = _leen(av[1]);
	i--;

	while(av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
		i--;

	while(i >= 0)
	{
		while(i >= 0 && av[1][i] != ' ' && av[1][i] != '\t')
			i--;

		if(av[1][i] == ' ' || av[1][i] == '\t')
		{
			j = 1;
			while(av[1][i + j] && (av[1][i + j] != ' ' && av[1][i + j] != '\t'))
			{
				write(1, &av[1][i + j],1);
				j++;
			}
		}
		i--;
	}
}
