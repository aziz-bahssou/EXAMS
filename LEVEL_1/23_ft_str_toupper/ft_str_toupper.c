char	*ft_str_toupper(char *str)
{
	char *s = str;
	while(*str)
	{
		if(*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return(s);
}
#include <stdio.h>
int main()
{
	char s[] = "azizBA3244";
	printf("%s",ft_str_toupper(s));
}