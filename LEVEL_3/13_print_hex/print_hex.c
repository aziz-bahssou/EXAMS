#include <unistd.h>


void print_hex(int nb)
{
	char hex[] = "0123456789abcdef";
	char c_towrite;

	if(nb >= 16)
		print_hex(nb / 16);
	
	write(1, &hex[nb % 16], 1);
}

int	main(int ac, char **av)
{
	if( ac != 2)
	{
		return (1, "\n", 1);
		return (0);
	}

	int base_10 = (av[1][0] - '0');

	print_hex(base_10);
	write(1, "\n", 1);

	return (0);
}
