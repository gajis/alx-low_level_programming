#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of its parameters
 * @n: arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list my_nums;
	unsigned int numb;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(my_nums, n);

	for (numb = 0; numb < n; numb++)
		sum += va_arg(my_nums, int);
	va_end(my_nums);
	return (sum);
}
