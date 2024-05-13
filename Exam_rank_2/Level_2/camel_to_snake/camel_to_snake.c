#include <unistd.h>
#include <stdlib.h>

int	camel_size(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	char *snake;
	int	j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		i = camel_size(argv[1]);
		snake = malloc((sizeof(char)) * i + 1);
		i = 0;
		while (argv[1][j] != '\0')
		{
			if (argv[1][j] >= 'a' && argv[1][j] <= 'z')
				snake[i] = argv[1][j];
			else if (argv[1][j] >= 'A' && argv[1][j] <= 'Z')
			{
				snake[i] = '_';
				i++;
				snake[i] = argv[1][j] + 32;
			}
			else
				snake[i] = argv[1][j];
			i++;
			j++;
		}
		i = 0;
		while (snake[i] != '\0')
		{
			write (1, &snake[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
