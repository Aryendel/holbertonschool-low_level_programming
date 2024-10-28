#include <stdio.h>
#include "main.h"
/**
 * FizzBuzz - prints fizz for 3 multiple and buzz for 5 multiple
 * Return: nothing
 */
int main(void)
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
			if (i == 0)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
				continue;
			}
		}
		printf("%d ", i);
	}
	return (0);
}
