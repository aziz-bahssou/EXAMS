char	*ft_strpbrk(const char *s1, const char *s2)
{
	char *s3 = s2;
	while(*s1)
	{
		while(*s2)
		{
			if(*s1 == *s2)
				return (s1);
			s2++;
		}
		s2 = s3;
		s1++;
	}
	return(0);
}