#include <unistd.h>

int _count_words(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while(str[i])
	{
		while(str[i] && str[i] == ' ' || str[i] == '\t')
			i++;
		if(str[i])
		{
			count++;
			while(str[i] && str[i] != ' ' && str[i] != '\t')
				i++;
		}
	}
	return(count);
}
#include <stdio.h>
int	main(int ac, char** av)
{
	if(ac != 2)
	{
		write(1, "\n",1);
		return(0);
	}
	int res = _count_words(av[1]);
	printf("%d",res );
}