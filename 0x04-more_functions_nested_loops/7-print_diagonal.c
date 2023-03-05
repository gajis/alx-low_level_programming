#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on terminal
 * @n: integer
 * Return: void
 */

void print_diagonal(int n)
{
	int c;
	int d;

	if (n > 0)
	{
		for (c = 1; c <= n; c++)
		{
			for (d = 1; d < c; d++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

