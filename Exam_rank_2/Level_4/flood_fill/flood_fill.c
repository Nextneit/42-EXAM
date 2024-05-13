typedef struct  s_point
{
    int           x;
    int           y;
}               t_point;

void	fill(char **tab, t_point size, t_point actual, char c)
{
	t_point	new;

	if (actual.y >= size.y || actual.x >= size.x || actual.y < 0 || actual.x < 0 || tab[actual.y][actual.x] != c)
		return;
	tab[actual.y][actual.x] = 'F';
	new.y = actual.y - 1;
	new.x = actual.x;	
	fill(tab, size, new, c);
	new.y = actual.y + 1;
	new.x = actual.x;
	fill(tab, size, new, c);
	new.y = actual.y;
	new.x = actual.x - 1;
	fill(tab, size, new, c);
	new.y = actual.y;
	new.x = actual.x + 1;
	fill(tab, size, new, c);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
/*
#include <stdlib.h>
#include <stdio.h>

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}*/
