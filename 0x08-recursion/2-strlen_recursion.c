#include "main.h"

/**
 * _strlen_recursion - Function that returns the lengrh of a string
 * @s: a string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int num;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		num = 1 + (_strlen_recursion(s + 1));
		return (num);
	}
}
