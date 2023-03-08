#include "main.h"

/**
 * is_prime_number -  Function that returns 1 if integer is prime
 * @n: integer
 * Return: integer
 */
int is_prime_number(int n)
{
	int x = 2;

	if (n == 0 || n == 1)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (0);
	}
	else
	{
		if (n % 2 != 0)
		{
			return (1);
		}
		else
		{
			return (is_prime_number(x++));
		}
	}
}
