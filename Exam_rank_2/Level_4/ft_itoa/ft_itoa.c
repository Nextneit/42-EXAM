#include <stdlib.h>

long long int power(int n)
{
	int i = 0;
	long long int r = 1;
	while(i < n)
	{
		i++;
		r *= 10;
	}
	return(r);
}

char	*ft_itoa(int nbr)
{
	int	i;
	int	len;
	int	aux;
	char *str;

	i = 0;
	len = 0;
	aux = nbr;
	if (nbr == -2147483648)
	{
		str = malloc(12);
		str[0] = '-';
		str[1] = '2';
		str[2] = '1';
		str[3] = '4';
		str[4] = '7';
		str[5] = '4';
		str[6] = '8';
		str[7] = '3';
		str[8] = '6';
		str[9] = '4';
		str[10] = '8';
		str[11] = '\0';
		return (str);
	}	
	if (aux < 0)
	{
		aux *= -1;
		len++;
	}
	while (aux > 9)
	{
		aux /= 10;
		len++;
	}
	len++;
	str = malloc((sizeof(char) * len + 1));
	if (nbr == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		str[2] = '1';
		str[3] = '4';
		str[4] = '7';
		str[5] = '4';
		str[6] = '8';
		str[7] = '3';
		str[8] = '6';
		str[9] = '4';
		str[10] = '8';
		return (str);
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
		i++;
	}
	int j = 0;
	aux = nbr;
	while (i < len)
	{
		j = 0;
		aux = nbr;
		while (aux > 9)
		{
			aux	/= 10;
			j++;
		}
		str[i] = aux + '0';
		i++;
		if (nbr > 9)
			nbr = nbr % (power(j));
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	//int	nbr = 456773;

	printf("%s", ft_itoa(-53468341));
}*/
