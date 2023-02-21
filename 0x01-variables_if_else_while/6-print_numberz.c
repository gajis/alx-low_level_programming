#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - Program that prints base 10 numbers using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
