#include <unistd.h>
int is_matched(char *s1, char *s2, int index)
{
	int i;

	i = 0;
	while(s2[i] && s1[index + i] == s2[i])
		i++;

	if(s2[i] == '\0')
		return(i);
	return(0);
}

void print_str(char *str)
{
	int i;

	i = 0;
	while(str[i])
		write(1,&str[i++],1);
}

int	main(int ac, char **av)
{
	if(ac != 4)
	{
		write(1, "\n", 1);
		return(0);
	}
	int i;
	int leen;
	
	i = 0;
	while(av[1][i])
	{
		if(i == 0 || av[1][i - 1] == ' ')
		{
			leen = is_matched(av[1],av[2],i);
			if(leen && av[1][i + leen] == ' ' || av[1][i + leen] == '\0')
			{
				print_str(av[3]);
				i += leen;
				continue;
			}
		}
		write(1, &av[1][i],1);
		i++;
	}
	write(1, "\n", 1);
	return (0);

}



// int leen(char *str)
// {
// 	int i;
// 	i = 0;
// 	while(str[i])
// 		i++;
// 	return i;
// }

// int searsh_str(char *s1, char *s2 , int target)
// {
// 	int i;

// 	i = 0;
// 	while(s2[i] && s2[i] == s1[target + i])
// 		i++;
// 	if(i == leen(s2))
// 		return(i);
// 	return(0);
// }


// void print_str(char *str)
// {
// 	int i;

// 	i = 0;
// 	while(str[i])
// 		write(1,&str[i++],1);
// }

// int	main(int ac, char **av)
// {
// 	if(ac != 4)
// 	{
// 		write(1, "\n", 1);
// 		return(0);
// 	}
// 	int i;

// 	i = 0;
// 	while(av[1][i])
// 	{
// 		if(searsh_str(av[1],av[2],i))
// 		{
// 			if((i == 0 || (av[1][i - 1] == ' ') ) && ((av[1][i + leen(av[2])] == ' ') 
// 				|| (av[1][i + leen(av[2])] == '\0')))
// 			{
// 				print_str(av[3]);
// 				i += searsh_str(av[1],av[2],i);
// 				continue;
// 			}
// 		}
// 		write(1, &av[1][i],1);
// 		i++;
// 	}
// }