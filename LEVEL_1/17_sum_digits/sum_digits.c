int	sum_digits(char *str)
{
	int sum;
	int i;

	i = 0;
	sum = 0;
	while(str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			sum += ((str[i]) - '0');
		i++;
	}
	return(sum);
}