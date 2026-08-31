#include <unistd.h>
#include <stdlib.h>
int _leen(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return(i);
}

int _was_seen(char *str, int index)
{
	int i;
	i = 0;
	while(i < index)
	{
		if(str[i] == str[index])
			return(1);
		i++;
	}
	return(0);
}
void fill_it(int ac, char **av, char *res)
{
	int i;
	int j;
	int pos;
	pos = 0;
	i = 1;
	while(i < ac)
	{
		j = 0;
		while(av[i][j])
			res[pos++] = av[i][j++];
		i++;
	}
}

int	main(int ac, char **av)
{
	int total_leen;
	int i;
	char *res;

	if(ac != 3)
	{
		write(1, "\n",1);
		return(0);
	}
	total_leen = 0;
	total_leen += _leen(av[1]);
	total_leen += _leen(av[2]);
	res = malloc((total_leen + 1) * sizeof(char));
	if(!res)
		return(0);
	res[total_leen] = '\0';
	fill_it(ac,av,res);
	i = 0;
	while(res[i])
	{
		if(!_was_seen(res,i))
			write(1, &res[i],1);
		i++;
	}
	return(0);
}