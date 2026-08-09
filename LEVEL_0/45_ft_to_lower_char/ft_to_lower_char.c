char	ft_to_lower_char(char c)
{
	if(c >= 'A' && c <= 'Z')
		c += 32;
	
	return(c);
}