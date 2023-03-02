#include "main.h"
/**
 * reverse_array - function that reverses the content of array
 * @a: pointer
 * @n: integer
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	int tmp;

	n = n - 1;
	while (i < n)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = tmp;
		i++;
		n--;
	}
}
