
int	ft_is_sorted(int *tab, int size)
{
	int	i;
	int	asc;
	int	desc;

	i = 0;
	asc = 1;
	desc = 1;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			asc = 0;
		if (tab[i] < tab[i + 1])
			desc = 0;
		i++;
	}
	return(asc || desc);
}
