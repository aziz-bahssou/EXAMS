#include <unistd.h>

	int _atoi(char *str)
	{
		int i;
		int res;
	
		res = 0;
		i = 0;
		while(str[i])
			res = res * 10 + (str[i++] - '0');
		return(res);
	}
	void to_binary(int nb)
	{
		char binary[] = "01";
		char c;
		while(nb > 0)
		{
			c = binary[nb % 2];
			write(1, &c, 1);
			nb /= 2;
		}
	}
int	main(int ac, char **av)
{
	if(ac != 2)
		return(0);
	to_binary(_atoi(av[1]));
}