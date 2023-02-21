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

	printf("Size of a char: %lu byte(s)\n", sizeof(mychar));
	printf("Size of an int: %lu byte(s)\n", sizeof(myint));
	printf("Size of a long int: %lu byte(s)\n", sizeof(mylongint));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(mylonglongint));
	printf("Size of a float: %lu byte(s)\n", sizeof(myfloat));
	return (0);
}
