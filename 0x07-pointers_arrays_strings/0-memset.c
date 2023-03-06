#include "main.h"

/**
 * _memset - Function fills memory with a constant byte
 * @s: pointer
 * @b: integer
 * @n: integer
 * Return: Pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}
