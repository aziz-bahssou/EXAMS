#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac != 1)
	{
		write(1, "a\n",2);
		return(0);
	}
	i = 0;
	while (av[1][i]){
		if(av[1][i] == 'a'){
			write(1,&av[1][i],1);
			break;
		}
		i++;
	}
	write(1, "\n",1);
}
