#include "main.h"

/**
 * largest_number - returns the largest number
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	if (a > c && c > b)
	{
		largest = a;
	}
	else if (b > c && c > a)
	{
		largest = b;
	}
	else
	{
		largest = a;
	}

	return (largest);
 }
