#include <stdio.h>
/**
 * main -Entry point
 * Description - prog display a-z
 * Return: Always 0 (success)
 */
int  main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;

	}

	return (0);
}

