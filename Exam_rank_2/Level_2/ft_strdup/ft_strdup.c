#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int	i;
	char	*dst;

	i = 0;
	while (src[i] != '\0')
		i++;
	dst = malloc(sizeof(char) * i + 1);
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
