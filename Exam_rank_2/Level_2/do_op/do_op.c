#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (argc == 4)
	{
		x = atoi(argv[1]);
		y = atoi(argv[3]);
		if (argv[2][0] == '+')
			x += y;
		else if (argv[2][0] == '-')
			x -= y;
		else if (argv[2][0] == '*')
			x *= y;
		else if (argv[2][0] == '/')
			x /= y;
		else if (argv[2][0] == '%')
			x %= y;
		printf("%d", x);
	}
	printf("\n");
}
