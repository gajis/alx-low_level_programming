#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that adds positive numbers
 * @argc: counter
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int numb, index, sum = 0;

	for (numb = 1; numb < argc; numb++)
	{
		for (index = 0; argv[numb][index]; index++)
		{
			if (argv[numb][index] < '0' || argv[numb][index] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[numb]);
	}

	printf("%d\n", sum);

	return (0);
}
