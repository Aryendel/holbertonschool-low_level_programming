#include <stdio.h>
#include "main.h"
/**
 * FizzBuzz - prints fizz for 3 multiple and buzz for 5 multiple
 * Return: nothing
 */
void FizzBuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		printf("%d ", i);

	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	FizzBuzz();
	return (0);
}
