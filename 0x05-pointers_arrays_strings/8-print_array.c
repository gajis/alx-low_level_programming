#include "main.h"
#include "stdio.h"

/**
 * print_array - Function prints n elements of an array
 * @a: integer
 * @n: integer
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int x;

	x = 0;

	for (n--; n >= 0; n--)
		x++;
	{
		printf("%d", a[x]);
		if (n > 0)
		{
			printf(",");
		}
	}
	printf("\n");
}
