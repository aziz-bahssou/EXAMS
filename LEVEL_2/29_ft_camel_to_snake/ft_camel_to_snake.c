#include <unistd.h>
int is_lower(char c)
{
	return(c >= 'A' && c <= 'Z');
}

int	main(int ac, char **av)
{
	int i;
	if(ac != 2 || av[1][0] == '\0')
	{
		write(1, "\n",1);
		return(0);
	}
	i = 0;
	while(av[1][i])
	{
		if(is_lower(av[1][i]))
		{
			write(1, "_",1);
			av[1][i] += 32;
		}
		write(1 , &av[1][i],1);
		i++;
	}
	write(1, "\n",1);
	return(0);
}