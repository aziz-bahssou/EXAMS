#include <unistd.h>

char enigma(char c)
{
	if(c >= 'a' && c <= 'z')
	{
		if(c == 'z')
			return('a');
		else
			return(c + 1);
	}
	else
	{
		if(c == 'Z')
			return('A');
		else
			return(c + 1);
	}
}

int	main(int ac, char **av)
{
	int i;
	if(ac != 2)
	{
		write(1, "\n",1);
		return (0);
	}
	i = 0;
	while(av[1][i])
	{
		char c;
		c = av[1][i];

		if((av[1][i] >= 'A' && av[1][i] <= 'Z')
		|| av[1][i] >= 'a' && av[1][i] <= 'z')
			c = enigma(c);
		write(1, &c,1);
		i++;
	}
	write(1, "\n",1);
}