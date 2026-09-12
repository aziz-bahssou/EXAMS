#include <unistd.h>
int is_alpha(char c)
{
	return((c >= 'a' && c <= 'z') 
		|| (c >= 'A' && c <= 'Z'));
}

void _print_str(char *str)
{
	int i;

	i = 0;
	while(str[i])
		write(1, &str[i++],1);
}

int is_space(char c)
{
	return((c == ' ' || c == '\t'));
}
	
#include <stdio.h>

int	main(int ac, char **av)
{
	int i;
	int navig;
	if(ac != 2)
		return(0);
	i = 0;
	navig = 1;
	while(av[1][i])
	{
		if(navig && is_alpha(av[1][i]))
		{
			av[1][i] -= 32;
			navig = 0;
		}
		else if(!navig && !is_space(av[1][i]) && !is_alpha(av[1][i]))
		{
			av[1][i] += 32;
			navig = 0;
		}
		else if(is_space(av[1][i]))
			navig = 1;
		i++;
	}
	_print_str(av[1]);

	write(1, "\n",1);
	return(0);
}
