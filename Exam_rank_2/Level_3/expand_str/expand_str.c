#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][k] != '\0')
			k++;
		k--;
		while (argv[1][k] == ' ' || argv[1][k] == '\t')
			k--;
		k++;
		while (i < k)
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				while (argv[1][i] == ' ' || argv[1][i] == '\t')
					i++;
				write (1, "   ", 3);
				i--;
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
