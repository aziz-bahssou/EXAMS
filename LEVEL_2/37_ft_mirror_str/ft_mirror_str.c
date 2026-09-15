#include <unistd.h>

int leen(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}
int	main(int ac, char **av)
{
	int i;

	if(ac != 2)
		return(0);
	i = 0;
	while(av[1][i])
		write(1,&av[1][i++],1);
	write(1, "|",1);
	i = leen(av[1]);
	while(i)
		write(1,&av[1][--i],1);
	write(1, "\n",1);
	return(0);
}