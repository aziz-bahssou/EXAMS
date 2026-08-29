int	max(int *tab, int len)
{
	int lagrest_nb;

	lagrest_nb = *tab;
	while(len)
	{
		if(*tab > lagrest_nb)
			lagrest_nb = *tab;
		len--;
		tab++;
	}
	return(lagrest_nb);
}
