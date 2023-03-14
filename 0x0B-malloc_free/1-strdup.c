#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to a newly allocated space
 * @str: pointer
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *ch;
	int i, x;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	ch = malloc(i * sizeof(*ch) + 1);
	if (ch == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
		ch[x] = str[x];
	ch[x] = '\0';

	return (ch);
}
