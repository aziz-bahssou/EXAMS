#include <unistd.h>

int count_alpha(char *str, char c)
{
	int count;
	count = 0;
	while(*str)
	{
		if(*str == c)
			count++;
		str++;
	}
	return(count);
}
int is_seen(char *str, int index)
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
	char ch;
	if(ac != 2 || av[1][0] == '\0')
	{
		write(1, "\n",1);
		return (0);
	}
	i = 0;
	while(av[1][i])
	{
		if(!is_seen(av[1], i))
		{
			if(count_alpha(av[1], av[1][i]) > 1)
			{
				ch = count_alpha(av[1],av[1][i]) + '0';
				write(1, &ch,1);
				write(1, &av[1][i],1);
			}
			else
				write(1, &av[1][i],1);
		}
		i++;
	}
	write(1,"\n",1);
	return(0);
}
