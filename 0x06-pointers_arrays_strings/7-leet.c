#include "main.h"
/**
 * leet - function that encode a string into 1337
 * @s: pointer
 * Return: pointer
 */
char *leet(char *s)
{
	int x;
	int a;

	x = 0;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[x])
	{
		for (a = 0; a <= 7; a++)
		{
			if (s[x] == leet[a] ||
			    s[x] - 32 == leet[a])
				s[x] = a + '0';
		}

		x++;
	}

	return (s);
}
