#include <stdio.h>
/**
 * main - Entry point
 * Description - Program prints the alphabets in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	char be;

	for (be = 'z'; be >= 'a'; be--)
	putchar(be);
	putchar('\n');

	return (0);
}
