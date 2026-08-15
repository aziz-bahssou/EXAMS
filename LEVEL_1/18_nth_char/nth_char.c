#include <unistd.h>

void	print_nth_char(char *str, int n)
{
	if(str[0] == '\0' || n < 0)
	{
		write(1, "\n",1);
		return(0);
	}

	int i;
	i = 0;

	while(str[i])
		i++;

	if( n > i)
	{
		write(1, "\n",1);
		return(0);
	}
	i = 0;
	while(str[i])
	{
		write(1, str[i],1);
		i += n;
	}

}