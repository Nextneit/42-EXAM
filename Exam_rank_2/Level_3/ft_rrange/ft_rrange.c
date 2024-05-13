#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	*array;
	int	n;
	int	i;

	n = 0;
	i = 0;
	if (start > end)
		n = start - end + 1;
	else
		n = end - start + 1;
	array = malloc(sizeof(int) * n);
	if (end > start)	
	{
		while (i < n)
		{
			array[i] = end;
			i++;
			end--;
		}
	}
	else
	{	
		while (i < n)
		{
			array[i] = end;
			i++;
			end++;
		}
	}
	return (array);
}
