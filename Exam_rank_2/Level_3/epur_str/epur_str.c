#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][j] != '\0')
			j++;
		j--;
		while (argv[1][j] == ' ' || argv[1][j] == '\t')
			j--;
		while (i <= j)
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				write (1, " ", 1);
				while (argv[1][i] == ' ' || argv[1][i] == '\t')
					i++;
			}
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
