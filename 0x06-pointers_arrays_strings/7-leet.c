#include "main.h"
/**
 * leet - function that encode a string into 1337
 * @x: pointer
 * Return: pointer
 */
char *leet(char *x)
{
	int a;
	int b;

	char str[] = "aeotlAEOTL";
	char strr[] = "43071";

	for (a = 0; x[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (x[a] == str[b])
			{
				x[a] = strr[b];
			}
		}
	}
	return (x);
}