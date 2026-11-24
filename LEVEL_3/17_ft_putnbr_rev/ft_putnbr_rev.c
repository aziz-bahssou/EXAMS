#include <unistd.h>

void	ft_putnbr_rev(int nb)
{
	long n = (long) nb;
	long rev = 0;
	if(n < 0)
	{
		n * -1;
		write(1,"\n",1);
	}
	
	while(n)
	{
		char c = (n % 10) + '0';
		write(1, &c, 1);
	
		n /= 10;
	}
}

int main()
{

	ft_putnbr_rev(4777);

	return(0);
}