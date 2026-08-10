#include <unistd.h>
void printALL(char c)
{
	char upper = 'A';
	char lower = 'a';
	if(c >= 'a' && c <= 'z')
	{
		while(lower <= c)
		{
			write(1, &c,1);
			lower++;
		}
	}
	else if(c >= 'A' && c <= 'Z')
	{
		while(upper <= c)
		{
			write(1, &c,1);
			upper++;
		}
	}
}

int	main(int ac, char **av)
{
	if(ac != 2)
	{
		write(1, "\n",1);
		return(0);
	}
	int i;
	i = 0;
	char alpha;
	while(av[1][i])
	{
		if(av[1][i] >= 'a' && av[1][i] <= 'z'
		|| av[1][i] >= 'A' && av[1][i] <= 'Z')
			printALL(av[1][i]);
		else
			write(1, &av[1][i],1);
		i++;
	}
	write(1, "\n", 1);
}
