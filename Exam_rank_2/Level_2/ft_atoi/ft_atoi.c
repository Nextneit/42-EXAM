int	ft_atoi(const char *str)
{
	int	nb;
	int	i;
	int	sign;

	nb = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (sign * nb);
}
