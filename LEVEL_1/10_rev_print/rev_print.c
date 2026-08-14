#include <unistd.h>
void _rev_str(char *str)
{
	if(*str == '\0')
		return;

		_rev_str(str + 1);
		write(1, str,1);
}

int	main(int ac, char **av)
{
	if(ac != 2)
	{
		write(1, "\n",1);
		return(0);
	}
	_rev_str(av[1]);
	return(0);

}
