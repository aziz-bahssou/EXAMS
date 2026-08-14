#include <unistd.h>
void _putchar(char c)
{
	write(1, &c, 1);
}
int	main(int ac, char **av)
{
	if(ac != 2 || av[1][0] == '\0')
	{
		write(1, "\n",1);
		return(0);
	}
	int i ;
	i = 0;
	while(av[1][i])
		i++;
	if(i > 1)
	{
		_putchar(av[1][0]);
		_putchar(av[1][--i]);
		return (0);
	}
	_putchar(av[1][0]);
	_putchar(av[1][0]);
	return(0);

}
