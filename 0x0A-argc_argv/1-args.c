#include <stdio.h>

/**
 * main - Function that prints number of arguments passed into it
 * @argc: counter
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
