#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string
 *
 * Return: void
 */
void_puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
