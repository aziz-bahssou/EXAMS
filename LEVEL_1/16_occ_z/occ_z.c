#include <unistd.h>

int	main(int ac, char **av)
{
	if(ac != 2)
		return(0);
	int i;
	int countA;
	countA = 0;
	i = 0;
	while(av[1][i])
	{
		if(av[1][i] == 'Z')
			countA++;
		i++;
	}
	
}
