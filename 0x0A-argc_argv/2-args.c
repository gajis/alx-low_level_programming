#include "main.h"
#include <stdlib.h>

/**
 * print_arg - Program that prints all arguments it receives
 * @argc: counter
 * @argv: pointer
 * Return: 0
 */
int print_arg(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_putchar(argv[i]);
	}
	return (0);
}
