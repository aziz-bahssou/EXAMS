#include <unistd.h>

int	main(int ac, char **av)
{
	if(ac != 2)
	{
		write(1, "\n",1);
		return(0);
	}
	int i;
	i = 0;
	while(av[1][i])
	{
		char c = av[1][i];

		if(c >= 'a' && c <= 'z')
		{
			if(c <= 'n')
				c += 13;
			else 
				c -= 13;
		}
		if (c >= 'A' && c <= 'Z')
		{
				if(c <= 'N')
				c += 13;
			else 
				c -= 13;
		}
		write(1, &c,1);
		i++;
	}
	return (0);

}
