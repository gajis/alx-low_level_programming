#include "main.h"

/**
 * _strlen - function that returns string length
 * @s: string
 *
 * Return: int length
 */
int _strlen(char *s)
{
	int tall = 0;

	while (s[tall] != '\0')
		++tall;
	return (tall);
}
