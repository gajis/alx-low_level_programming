#include <stdlib.h>
#include "main.h"

/**
 * array_range - Funtion that creates array of integers
 * @min: integer
 * @max: integer
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int range, i;
	int *p;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	p = malloc(range * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		*(p + i) = min + i;
	}

	return (p);
}
