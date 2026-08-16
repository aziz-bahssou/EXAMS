#include <unistd.h>
void _put_str(char *c)
{
	while(*c)
		write (1, c++,1);
}
void _put_number(int n)
{
	char c;
	if(n > 9)
		_put_number(n / 10);
	c = (n % 10) + '0';
	write(1, &c,1);
}
void	pingpong(int n)
{
	while(n <= 100)
	{
		if(n % 3 == 0 && n % 5 == 0)
		{
			_put_str("pingpong");
			write(1, "\n",1);
		}
		else if(n % 3 == 0)
		{
			_put_str("ping");
			write(1, "\n",1);
		}
		else if(n % 5 == 0)
		{
			_put_str("pong");
			write(1, "\n",1);
		}
		else
		{
			_put_number(n);
			write(1, "\n",1);
		}
		n++;
	}
	_put_number(n);
	write(1, "\n",1);
}
int main()
{
	pingpong(998); // 1
	
	return (0);
	
}