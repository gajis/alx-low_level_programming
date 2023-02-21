#include <stdio.h>
/**
 * main - Entry point
 * Description - Program that prints base16 numbers in lower case
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;
	int x;

	ch = 'a';
	x = 0;

	while (x < 10)
	{
		putchar(x);
		x++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;

	}
	putchar("\n");

	return (0);
}
