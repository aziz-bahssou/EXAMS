#include <unistd.h>

int get_leen(char *str)
{
	int leen;
	leen = 0;
	while(str[leen])
		leen++;
	return(leen);
}
int is_odd(int n)
{
	if(n % 2 == 0)
		return(0);
	return(1);
}

char *rev_str(char *str)
{
	int end;
	char c;
	end = get_leen(str);
	if(is_odd(get_leen(str)))
		end -= 2;
	else
		end--;
		
	while(end)
	{
		c = str[end];
		str[end] = str[end - 1];
		str[end - 1] = c;
		end -=2;
	}
	return(str);
}
#include <stdio.h>

int	main(int ac, char **av)
{
	char str[] = "helle";
	printf("%s", rev_str(str));
}