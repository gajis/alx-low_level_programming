#include <stdio.h>
/**
 * main - Program that prints numbers from 1 to 100
 * Return: returns 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x < 100)
		{
			if (x % 15 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (x % 5 == 0)
			{
				printf("Buzz ");
			}
			else if (x % 3 == 0)
			{
				printf("Fizz ");
			}
			else
			{
				printf("%d ", x);
			}
		}
		else
		{
			printf("Buzz%d", x);
		}
	}
		printf("\n");
		return (0);
}
