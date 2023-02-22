#include "main.h"
/**
 * print_alphabet - Entry point
 * Descriprion - Function that prints the alphabets in lower case
 * Return: Always 0
 */
void print_alphabet(void)
{
	char fing  = 'a';

	while (fing <= 'z')
	{
		_putchar(fing);
		fing++;
	}
	_putchar('\n');
}
