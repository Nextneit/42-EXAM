#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;
	int	i;

	x = 0;
	y = 0;
	i = 0;
	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		if (x > y)
			i = y;
		else if (x < y)
			i = x;
		while (i > 0)
		{
			if (x % i == 0 && y % i == 0)
			{
				printf("%d\n", i);
				return (0);
			}
			i--;
		}
	}
	printf("\n");
}
