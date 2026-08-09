#include <unistd.h>
int _countlen(char *str)
{
	int i ;
	i = 0;
	while(str[i])
		i++;
	return(i);
}

int	main(int ac, char **av)
{
	int end;
	if(ac == 1)
	{
		write(1, "\n",1);
		return(0);
	}
	if(av[1][0] == '\0'){
		write(1, "\n",1);
		return(0);
	}
	
	end = _countlen(av[1]) - 1;
	write(1, &av[1][end],1);
	write(1, "\n",1);
}