#include <unistd.h>


int _is_seen(char *str, char c)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] == c)
			return(1);
		i++;
	}
	return(0);
}

int	main(int ac, char **av)
{
	if(ac != 3)
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
			if(!_is_seen(av[i + 1], av[i][j]))
				write(1, &av[i][j],1);
			j++;
		}
		if(av[i][j] == '\0')
		{
			i++;
			j = 0;
			if(!_is_seen(av[i - 1], av[i][j]))
				write(1, &av[i][j],1);
			j++;
		}
	}
	write(1, "\n",1);
}
