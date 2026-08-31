#include <unistd.h>

void _print_str(char *str)
{
	while(*str)
		write(1, str++,1);
}


int is_matched(char *str1, char *str2)
{
	int i;
	
	i = 0;
	while(*str1)
	{
		if(str2[i] && *str1 == str2[i])
			str1++;
		
		i++;
	}
	if(*str1 == '\0')
		return(1);
	return(0);
}

int	main(int ac, char **av)
{
	if(ac != 3)
	{
		write(1, "\n", 1);
		return(0);
	}
	if(is_matched(av[1], av[2]))
		_print_str(av[1]);

	write(1, "\n",1);
	return(0);
}
