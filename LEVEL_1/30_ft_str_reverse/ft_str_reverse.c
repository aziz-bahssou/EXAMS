char	*ft_str_reverse(char *str)
{
	int start;
	int end;
	char rev;

	end = 0;
	while(str[end])
		end++;
	end--;
	start = 0;
	while(start < end)
	{
		rev = str[start];
		str[start] = str[end];
		str[end] = rev;
		start++;
		end--;
	}
	return(str);
}
