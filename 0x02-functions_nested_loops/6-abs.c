#include "main.h"
#include <stdlib.h>

/**
  * _abs - Function that prints the absolute value of an int
  * @n: integer
  * Return: 0
  */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}
