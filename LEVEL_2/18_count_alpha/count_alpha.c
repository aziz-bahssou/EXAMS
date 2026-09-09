#include <unistd.h>

int _count_char(char *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(str[i])
	{
		if(str[i] == c)
			count++;
		i++;
	}
	return(count);
}
int _is_seen(char *str, int index)
{
	int i;

	i = 0;
	while(str[i] && i < index)
	{
		if(str[i] == str[index])
			return(1);
		i++;
	}
	return(0);
}

int	main(int ac, char **av)
{
	int i;
	char nb;

	if(ac != 2)
		return(0);
	i = 0;
	while(av[1][i])
	{
		if(!_is_seen(av[1], i))
		{
			nb = _count_char(av[1], av[1][i]) + '0';
			write(1, &nb,1);
			write(1, &av[1][i],1);
			write(1, ", ",2);
		}
		i++;
	}
	write(1, "\n",1);
}
