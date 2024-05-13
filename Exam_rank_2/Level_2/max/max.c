int		max(int* tab, unsigned int len)
{
	unsigned int	i;
	int	aux;

	i = 0;
	aux = 0;
	if (len == 0)
		return (0);
	aux = tab[i];
	while (i < len)
	{
		if (aux < tab[i])
			aux = tab[i];
		i++;
	}
	return (aux);
}
