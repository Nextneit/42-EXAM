#include <unistd.h>

int	ft_atoi(char *str)
{
	int nb;
	int	i;

	nb = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	char nbr;

	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb <= 9 && nb >= 0)
	{
		nbr = nb % 10 + '0';
		write (1, &nbr, 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	nb;

	i = 1;
	nb = 0;
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		while(i <= 9)
		{
			ft_putnbr(i);
			write (1, " x ", 3);
			ft_putnbr(nb);
			write (1, " = ", 3);
			ft_putnbr(i * nb);
			write (1, "\n", 1);
			i++;
		}
	}
	else
		write (1, "\n", 1);
}
