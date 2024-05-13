#include <unistd.h>

char	*ft_to_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		i++;
	}
	return (str);
}

void	rstr_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			i--;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			i++;
			while (str[i] == ' ' || str[i] == '\t')
				i++;
		}
		i++;
	}
	i--;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (argc >= 2)
	{
		while (argc > j)
		{
			argv[j] = ft_to_lower(argv[j]);
			rstr_capitalizer(argv[j]);
			while (argv[j][i] != '\0')
			{
				write (1, &argv[j][i], 1);
				i++;
			}
			i = 0;
			write (1, "\n", 1);
			j++;
		}
	}
	else
		write (1, "\n", 1);
}
