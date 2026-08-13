#include <unistd.h>

void _put_nmber(int nb)
{
	if(nb > 9)
		_put_nmber(nb / 10);
	char c = (nb % 10) + '0';
	write(1, &c, 1);
}
int	main(void)
{
	int i;

	i = 1;
	while(i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);

		else if(i % 5 == 0)
			write(1, "buzz",4);

		else if(i % 3 == 0)
			write(1, "fizz",4);
			
		else
			_put_nmber(i);
		write(1, "\n",1);
		i++;
	}
	write(1, "\n",1);
}
