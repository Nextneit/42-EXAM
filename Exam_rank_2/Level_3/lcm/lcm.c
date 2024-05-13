unsigned int    lcm(unsigned int a, unsigned int b)
{
	int	x;

	x = 0;
	if (a == 0 || b == 0)
		return (0);
	else if (a > b)
		x = a;
	else if (a < b)
		x = b;
	while (x)
	{
		if (x % a == 0 && x % b == 0)
			return (x);
		x++;
	}
	return (0);
}
