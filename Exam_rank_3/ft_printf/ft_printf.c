#include <unistd.h>
#include <stdarg.h>

int	printstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		s = "(null)";
	while (s[i] != '\0')
	{
		write (1, &s[i], 1);
		i++;
	}
	return (i);
}

int	printnbr(long long int nbr, int base)
{
	int	i;
	char	*s = "0123456789abcdef";
	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		i += write (1, "-", 1);
	}
	if (nbr >= base)
		i += printnbr((nbr / base), base);
	i += write (1, &s[nbr % base], 1);
	return (i);
}

int	ft_printf(const char *s, ...)
{
	int	i;
	int	c;
	va_list	ptr;

	i = 0;
	c = 0;
	va_start(ptr, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 's')
				c += printstr(va_arg(ptr, char *));
			if (s[i] == 'd')
				c += printnbr((long long int)va_arg(ptr, int), 10);
			if (s[i] == 'x')
				c += printnbr((long long int)va_arg(ptr, unsigned int), 16);
		}
		else
			c += write (1, &s[i], 1);
		i++;
	}
	return (va_end(ptr), c);
}
