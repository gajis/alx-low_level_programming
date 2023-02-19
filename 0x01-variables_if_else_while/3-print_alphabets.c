#include <stdio.h>
/**
 * main - Entry point
 * Description - program prints the alphabets in lower and then upper case
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';
	char my = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (my <= 'Z')
	{
		putchar(my);
		my++;
	}

	putchar('\n');

	return (0);
}
