#include "main.h"
/**
 * swap_int - function swaps the value of two integers
 * @a: is a pointer to an integer
 * @b: is a pointer to an integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int win = *a;
	*a = *b;
	*b = win;
}
