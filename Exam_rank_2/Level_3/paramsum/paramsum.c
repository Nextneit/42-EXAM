#include <unistd.h>

void	ft_putnbr(int i)
{
	char	c;

	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	if (i >= 0 && i <= 9)
	{
		c = i + '0';
		write (1, &c, 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc >= 1)
	{
		while (argv[i] != NULL)
			i++;
		i--;
		ft_putnbr(i);
	}
	write (1, "\n", 1);
}
