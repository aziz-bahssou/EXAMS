int	ft_nbrlen(int nb)
{
	if (nb == 0)
		return(0);
	return (1 + ft_nbrlen(nb / 10));
}
