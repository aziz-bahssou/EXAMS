#include <unistd.h>


int _hidenp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s2[i])
	{
		if(s1[j] == s2[i])
			j++;
		i++;
	}
	return(s1[j] == '\0');
}
#include <stdio.h>

int	main(int ac, char **av)
{
	char ch;

	if(ac != 3)
	{
		write(1, "\n",1);
		return(0);
	}

	ch = _hidenp(av[1],av[2]) + '0';
	write(1, &ch,1);
	write(1, "\n",1);
}
