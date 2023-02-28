#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string
 *
 * Return: void
 */
void _puts(char *str)
{
	int fat = 0;

	while (str[fat] != '\0')
		++fat;
	{
		_putchar(fat);
	}
	_putchar('\n');
}
