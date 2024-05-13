#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	x;
	int	i;

	x = 0;
	i = 2;
	if (argc == 2)
	{
		x = atoi(argv[1]);
		if (x == 1)
		{
			printf("%d\n", x);
			return (0);
		}
		while (x > 1)
		{
			if (x % i == 0)
			{
				printf("%d", i);
				x /= i;
				if (x == 1)
				{
					printf("\n");
					return (0);
				}
				else
					printf("*");
				i = 1;
			}
			i++;
		}
	}
	printf("\n");
}
