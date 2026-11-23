#include <unistd.h>
#include <stdlib.h>

int leenth(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}


void print_arr(char *str)
{
	int i = 0;
	while(str[i])
		write(1, &str[i++], 1);
}

int sub_exist(char *condidat, char *sub)
{
	int i, j;

	i = 0;
	while(condidat[i])
	{
		if(condidat[i] == *sub)
		{
			j = 0;
			while(sub[j] == condidat[i + j])
				j++;

			if(sub[j] == '\0')
				return(1);
		}
		j++;
	}
	return(0);
	
}

void main_loop(char **av, int ac)
{
	char *sub;
	int i;
	int j;
	int k;
	int str_lenth = leenth(av[1]);
	int lenth = str_lenth;

	sub = malloc(str_lenth + 1);
	if (!sub)
		return;
	sub[str_lenth] = '\0';

	while (lenth > 0)
	{
		i = 0;
		while (i + lenth <= str_lenth)
		{
			k = 0;
			while (k < lenth)
			{
				sub[k] = av[1][i + k];
				k++;
			}
			sub[k] = '\0';

			j = 2;

			while (j < ac && sub_exist(av[j], sub))
				j++;

			if (j == ac)
			{
				print_arr(sub);
				write(1, "\n", 1);
				free(sub);
				return;
			}
			i++;
		}
		lenth--;
	}
	write(1, "\n", 1);
	free(sub);
}

int	main(int ac, char **av)
{

	main_loop(av, ac);


}
