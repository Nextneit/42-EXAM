#include <unistd.h>

int	ft_atoi(char *str)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (str[i] != '\0')
	{
		nb *= 10;
		nb = nb + str[i] - '0';
		i++;
	}
	return (nb);
}

void	print_hex(int nb)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nb > 16)
		print_hex(nb / 16);
	write (1, &hexa[nb % 16], 1);
}

int	main(int argc, char **argv)
{
	int	nb;

	nb = 0;
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		print_hex(nb);
	}
	write (1, "\n", 1);
}
