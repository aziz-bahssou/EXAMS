
#include <unistd.h>
int is_mon_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') ||
			 (c >= 'A' && c <= 'Z'));
}

int is_capital(char c)
{
	return(c >= 'A' && c <= 'Z');
}

int is_lower(char c)
{
	return(c >= 'a' && c <= 'z');
}

char	*ft_str_capitalize(char *str)
{
	int i = 0;
	int j;

	while(str[i])
	{
		if(i == 0 || !is_mon_alpha(str[i - 1]))
		{
			if(is_lower(str[i]))
				str[i] -= 32;
			i++;
		}
		else
		{
			j = 0;
			while(str[i + j] && is_mon_alpha(str[i + j]))
			{
				if(is_capital(str[i + j]))
					str[i + j] += 32;
				j++;
			}
			i += j;
		}
		i++;
	}

	return(str);
}

#include <stdio.h>

int main()
{
	char str[] = "aziz-bahs=sou i love u";
	printf("%s\n", ft_str_capitalize(str));

}