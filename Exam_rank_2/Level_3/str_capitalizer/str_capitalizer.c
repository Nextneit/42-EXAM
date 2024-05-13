#include <unistd.h>

char	*ft_tolower(char *str)
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

char	*str_capitalizer(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i--;
			if (str[i] == ' ' || str[i] == '\t')
			{
				i++;
				str[i] -= 32;
			}
			i++;
		}
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (argc >= 2)
	{
		while (j < argc)
		{
			argv[j] = ft_tolower(argv[j]);
			argv[j] = str_capitalizer(argv[j]);
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
