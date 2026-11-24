
int	ft_is_palindrome(char *str)
{
	int i,j;

	i = 0;
	while(str[i])
		i++;
	i--;

	j = 0;
	while(j < i && str[i] == str[j]) 
	{
		i--;
		j++;
	}

	return(i == j);
}