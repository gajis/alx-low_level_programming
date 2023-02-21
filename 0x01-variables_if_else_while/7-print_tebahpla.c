#include <stdio.h>
/**
 * main - Entry point
 * Description - Program prints the alphabets in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar("\n");

	return (0);
}
