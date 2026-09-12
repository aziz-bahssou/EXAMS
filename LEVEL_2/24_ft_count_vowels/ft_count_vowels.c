int	ft_count_vowels(char *str)
{
	int count;

	count = 0;
	while(*str)
	{
		if(*str == 'a' || *str == 'i'
			|| *str == 'o' || *str == 'u')
		{
			count++;
		}
		
		else if(*str == 'A' || *str == 'I'
			|| *str == 'O' || *str == 'U')
		{
			count++;
		}
		str++;
	}
	return (count);
}
#include <stdio.h>
int main(int ac, char **av)
{
	
	printf("%d", ft_count_vowels(av[1]));

}