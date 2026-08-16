
int	ft_str_is_numeric(char *str)
{
	while(*str && *str >= '0' && *str <= '9')
		str++;

	if(*str == '\0')
		return(1);

	return(0);
}
#include <stdio.h>
int main()
{
	printf("%d",ft_str_is_numeric("444"));
}