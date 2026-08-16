
char	*ft_str_tolower(char *str)
{
	char *s = str;
	while(*str)
	{
		if(*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return(s);
}
#include <stdio.h>
int main()
{
	char s[] = "azizBA3244";
	printf("%s",ft_str_tolower(s));
}