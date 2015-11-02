int		ft_atoi(const char *nptr)
{
	int		i;
	int		nr;
	
	i = 0;
	nr = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nr = nr * 10 + (nptr[i] - '0');
		i++;
	}
	return (nr);
}