#include <unistd.h>
int _count_len(char *str)
{
	int i;
	int count;
	count = 0;
	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z'
		|| str[i] >= 'A' && str[i] <= 'Z')
			count++;
		i++;
	}
	return(count);
}
#include <stdio.h>

int	main(int ac, char **av)
{
	if(ac != 2 || av[1][0] == '\0')
	{
		write(1, "\n",1);
		return(0);
	}
	printf("%d", _count_len(av[1])); 
	return(0);
}
