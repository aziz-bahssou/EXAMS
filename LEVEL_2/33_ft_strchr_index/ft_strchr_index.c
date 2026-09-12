int	ft_strchr_index(char *str, char c)
{
	int i;

	i = 0;
	while(*str)
	{
		if(*str == c)
			return(i);
		i++;
		str++;
	}
	return(-1);
}
