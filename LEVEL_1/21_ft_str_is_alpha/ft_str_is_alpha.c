int	ft_str_is_alpha(char *str)
{
	while(*str && (*str >= 'a' && *str <= 'z')
	|| (*str >= 'A' && *str <= 'Z'))
		str++;

	if(*str == '\0')
		return(1);

	return(0);
}
#include <stdio.h>
int main()
{
	printf("%d",ft_str_is_alpha(""));
	
}