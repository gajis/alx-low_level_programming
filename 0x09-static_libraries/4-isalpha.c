#include "main.h"

/**
 * _isalpha - Entry point
 * @c: integer received
 * Description: check if it is alphabet
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
