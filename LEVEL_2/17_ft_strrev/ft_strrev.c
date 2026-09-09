#include <stdio.h>
int get_leen(char *str)
{
	int leen;
	leen = 0;
	while(str[leen])
		leen++;
	return(leen);
}

char *ft_strrev(char *str)
{
	int i;
	int leen;
	char rev;

	leen = get_leen(str);
	i = 0;
	leen--;
	while(i < leen)
	{
		rev = str[i];
		str[i] = str[leen];
		str[leen] = rev;
		leen--;
		i++;
	}
	return(str);
}

int main()
{
	char s[] = "aziz";
	char *str;
	str = ft_strrev(s);
	printf("%s", str);
	
}