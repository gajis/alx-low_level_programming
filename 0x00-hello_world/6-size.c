#include <stdio.h>
/**
 * main - Entry point
 * Desceiption - Program that prints size
 * Return: Always 0 (success)
 */
int main(void)
{
	int myint;
	char mychar;
	long int mylongint;
	float myfloat;
	long long int mylonglongint;

	printf("Size of a char: %lu byte\n", sizeof(mychar));
	printf("Size of an int: %lu bytes\n", sizeof(myint));
	printf("Size of a long int: %lu bytes\n", sizeof(mylongint));
	printf("Size of a long long int: %lu bytes\n", sizeof(mylonglongint));
	printf("Size of a float: %lu bytes\n", sizeof(myfloat));
	return (0);
}
