#include "main.h"
/**
 * main - check description
 * Description - Program that prints _putchar
 * Return: Always 0
 */
int main(void)
{
	char str[] = "_putchar";

	int x = 0;

	while (str[x] != '\0')
	{
		char c = str[x];

		_putchar(c);
		x++;
	}
	return (0)
}
