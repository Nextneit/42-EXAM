#include  <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				j = argv[1][i] - 96;
				while (j > 0)
				{
					write (1, &argv[1][i], 1);
					j--;
				}
				j = 0;
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				j = argv[1][i] - 64;
				while (j > 0)
				{
					write (1, &argv[1][i], 1);
					j--;
				}
				j = 0;
			}
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
