#include <unistd.h>

int	ft_atoi(char *str)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (str[i] != '\0')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb <= 9)
	{
		c = nb + '0';
		write (1, &c, 1);
	}
}

int	is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	add_prime_sum(int nb)
{
	int	sum;
	int	i;

	sum = 0;
	i = 2;
	while (nb >= i)
	{
		if(is_prime(i) == 1)
			sum += i;
		i++;
	}
	return (sum);
}

int	main(int argc, char **argv)
{
	int	nb;
	int	sum;

	nb = 0;
	sum = 0;
	if (argc != 2)
	{
		write (1, "0\n", 2);
		return (0);
	}
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		if (nb < 0)
		{
			write(1, "0\n", 2);
			return (0);
		}
		sum = add_prime_sum(nb);
		ft_putnbr(sum);
	}
	write (1, "\n", 1);
}
