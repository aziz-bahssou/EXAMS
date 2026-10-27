#include <unistd.h>

int is_space_tabe(char c)
{
	return(c == ' ' || c == '\t');
}

void Print_spaces()
{
	write(1, "___",3);
}
int	main(int ac, char **av)
{
	if(ac != 2)
	{
		write(1, "\n",1);
		return(0);
	}
	int i;
	int prented = 0;
	i = 0;

	while(av[1][i])
	{
		while(av[1][i] && is_space_tabe(av[1][i]))
			i++;
		if(av[1][i])
		{
			if(prented )
				write(1, "   ",3);
			while(av[1][i] && !is_space_tabe(av[1][i]))
			{
				write(1, &av[1][i],1);
				i++;
			}
			prented = 1;
		}
		
		i++;
	}
	write(1, "\n", 1);
	return(0);
}
