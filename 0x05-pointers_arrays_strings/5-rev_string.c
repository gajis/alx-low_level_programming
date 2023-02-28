#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int a, tee, see;
	char chap;

	for (tee = 0; s[tee] != '\0'; tee++)
		a = 0;
	see = tee / 2;

	while (see--)
	{
		chap = s[tee - a - 1];
		s[tee - a - 1] = s[a];
		s[a] = chap;
		a++;
	}
}
