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
	int i;
	int len;
	
	if (ac != 2 || av[1][0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	len = _countlen(av[1]);
	if(len % 2 == 0)
		write(1, &av[1][len / 2 - 1],2);
	else
		write(1, &av[1][len / 2],1);
	
	write(1, "\n",1);

}