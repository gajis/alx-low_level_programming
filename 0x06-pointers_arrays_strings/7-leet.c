#include "main.h"
/**
 * leet - Functiin that encodes a string into 1337
 * @st: pointer
 * Return: pointer
 */
char *leet(char *st)
{
	int a;
	int c;

	a = 0;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (st[a])
	{
		for (c = 0; c <= 7; c++)
		{
			if (st[a] == leet[c] ||
			    st[a] - 32 == leet[c])
				st[a] = c + '0';
		}

		a++;
	}

	return (st);
}
