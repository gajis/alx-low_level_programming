#include "main.h"

/**
 * print_rev - function that prints in reverse
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int fat = 0;

	while (s[fat])
		fat++;
	while (fat--)
	{
		_putchar(s[fat]);
	}
	_putchar('\n');
}
