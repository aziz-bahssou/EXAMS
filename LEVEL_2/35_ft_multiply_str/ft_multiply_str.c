#include <unistd.h>

int	_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	put_number(int nb)
{
	char	c;

	if (nb > 9)
		put_number(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	pos;
	int	len1;
	int	len2;
	int	arr[1000];

	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	len1 = _len(av[1]);
	len2 = _len(av[2]);

	i = 0;
	while (i < len1 + len2)
	{
		arr[i] = 0;
		i++;
	}

	i = len1 - 1;
	pos = 0;
	while (i >= 0)
	{
		j = len2 - 1;
		while (j >= 0)
		{
			arr[i + j + 1] +=
				(av[1][i] - '0') * (av[2][j] - '0');
			j--;
		}
		i--;
	}

	i = len1 + len2 - 1;
	while (i > 0)
	{
		if (arr[i] >= 10)
		{
			arr[i - 1] += arr[i] / 10;
			arr[i] %= 10;
		}
		i--;
	}

	i = 0;
	while (i < len1 + len2 - 1 && arr[i] == 0)
		i++;

	while (i < len1 + len2)
	{
		put_number(arr[i]);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}