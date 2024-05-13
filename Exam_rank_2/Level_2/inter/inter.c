#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char array[127] = {'0'};

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j] && array[(int)argv[1][i]] != '1')
				{
					write (1, &argv[1][i], 1);
					array[(int)argv[1][i]] = '1';
				}
				j++;
			}
			j = 0;
			i++;
		}
	}
	write (1, "\n", 1);
}
