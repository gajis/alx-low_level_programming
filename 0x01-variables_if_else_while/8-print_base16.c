#include <stdio.h>

/**
 * main - program that prints all numbers of base64 in lowercase.
 * Return: void
 */
int main(void)
{
	int x;
	char c;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}

	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
