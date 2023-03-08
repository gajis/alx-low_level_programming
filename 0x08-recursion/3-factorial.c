#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number
 * @n: integer
 * Return: n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
