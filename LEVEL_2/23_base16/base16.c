#include <unistd.h>
int _atoi(char *str)
{
	int res;

	res = 0;
	while(*str)
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res);
}

void _print_char(char c)
{
	write(1, &c,1);
}

void int_to_hex(int nb)
{
	char hex[] = "0123456789ABCDEF";
	while(nb > 0)
	{
		_print_char(hex[nb % 16]);
		nb /= 16;
	}
}

int	main(int ac, char **av)
{
	int nb;
	if(ac != 2 || av[1][0] == '\0')
	{
		write(1, "\n",1);
		return(0);
	}
	int_to_hex(_atoi(av[1]));
	write(1, "\n", 1);
	return(0);
}
