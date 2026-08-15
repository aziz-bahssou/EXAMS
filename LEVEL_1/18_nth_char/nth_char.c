#include <unistd.h>

void	print_nth_char(char *str, int n)
{
	if(str[0] == '\0' || n <= 0)
	{
		write(1, "\n",1);
		return;
	}

	int i;
	int len;
	len = 0;

	while(str[len])
		len++;

	if( n > len)
	{
		write(1, "\n",1);
		return;
	}
	i = n -1;
	while(i < len)
	{
		write(1, &str[i],1);
		i += n;
	}
	write(1, "\n",1);

}