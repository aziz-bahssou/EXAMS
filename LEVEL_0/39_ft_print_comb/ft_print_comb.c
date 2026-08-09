#include <unistd.h>

void ft_putcahr(char c)
{
	write(1, &c,1);
}

int	main(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while(i <= 7)
	{
		j = i + 1;
		while(j <= 8)
		{
			k = j + 1;
			while(k <= 9)
			{
				ft_putcahr(i + '0');
				ft_putcahr(j + '0');
				ft_putcahr(k + '0');
				if(i != 7)
					write(1, ", ",2);
				k++;
			}
			j++;
		}
		i++;
	}
	write(1, "\n",1);


}