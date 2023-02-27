#include "main.h"

/**
 * _strlen - function that returns string length
 * @s: string
 *
 * Return: int length
 */
int _strlen(char *s)
{
	int tall;

	while (s[tall])
		tall++;
	return (tall);
}
