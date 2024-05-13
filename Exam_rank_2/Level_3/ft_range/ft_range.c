#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	*array;
	int	len;
	int	i;
	int	j;
	int	k;
	
	len = end - start + 1;
	if (len < 0)
		len *= -1;
	array = malloc(sizeof(int) * len);
	i = 0;
	if (start <= end)
	{
		j = start;
		k = end;
		while (j <= k)
		{
			array[i] = j;
			j++;
			i++;
		}
	}
	else if (start > end)
	{
		j = start;
		k = end;
		while (j >= k)
		{
			array[i] = j;
			j--;
			i++;
		}
	}
	return (array);
}
