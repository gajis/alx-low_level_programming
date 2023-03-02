#include "main.h"
/**
 * string_toupper - Function that changes lowercase letters
 * @s: pointer
 *
 * Return: pointer
 */
char *string_toupper(char *s)
{
	int x = 0;

	while (*(s + x))
	{
		if (*(s + x) >= 'a' && *(s + x) <= 'z')
			*(s + x) -= 'a' - 'A';
		x++;
	}
	return (s);
}
