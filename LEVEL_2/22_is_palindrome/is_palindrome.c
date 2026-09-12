#include <unistd.h>

int get_leen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

int _is_palindrome(char *str)
{
	int end;
	int start;

	start = 0;
	end = get_leen(str) - 1;
	while(start < end && str[start] == str[end])
	{
		start++;
		end--;
	}
	if(start >= end)
		return(1);
	return(0);
}

void _print_str(char *str)
{
	while(*str)
		write(1, str++,1);
}

int	main(int ac, char **av)
{
	if(ac != 2 || av[1][0] == '\0')
	{
		write(1, "\n",1);
		return(0);
	}
	if(_is_palindrome(av[1]))
		_print_str(av[1]);
	write(1, "\n",1);
	return(0);
}
