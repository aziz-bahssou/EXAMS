#include <unistd.h>
void _put_nbr(int nb)
{
	char c;
	if(nb > 9)
		_put_nbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c,1);
}

int	main(int ac, char **av)
{
	_put_nbr(ac - 1);
	write(1, "\n",1);
}
