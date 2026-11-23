#include <stdio.h> 
#include <unistd.h>
#include <stdlib.h>


int get_lenth(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}

void print_str(char *str)
{
	int i = 0;
	while(str[i])
		write(1, &str[i++], 1);
}


int is_sub_apperse(char *av_str, char *sub)
{
	int i = 0;
	int j;

	while(av_str[i])
	{
		if(av_str[i] == *sub)
		{
			j = 0;
			while(av_str[i + j] == sub[j])
				j++;
			if(sub[j] == '\0')
				return(1);
		}
		i++;
	}

	return(0);
}

int main(int ac, char **av)
{
	if(ac == 1)
	{
		write(1, "\n", 1);
		return(0);
	}

	char *str_sub;
	int lenth;
	int str_lengh;
	int i;
	int k;
	int j;
	
	lenth = get_lenth(av[1]);

	str_sub = malloc(lenth + 1);
	if(!str_sub)
		return(0);
	str_sub[lenth] = '\0';

	i = 0;
	str_lengh = lenth;

	while(lenth)
	{
		j = 0;
		while(j + lenth <= str_lengh)
		{
			k = 0;
			while(k < lenth)
			{
				str_sub[k] = av[1][j + k];
				k++;
			}
			str_sub[k] = '\0';

			i = 2;
			while(i < ac && is_sub_apperse(av[i], str_sub))
			{
				i++;
			}
			
			if(i == ac)
			{
				print_str(str_sub);
				free(str_sub);
				write(1, "\n", 1);
				return(0);
			}

			j++;
		}
		lenth--;
	}
	
	free(str_sub);
	write(1, "\n", 1);
	return(0);

}
