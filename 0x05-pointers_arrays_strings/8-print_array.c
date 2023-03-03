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

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}