#include <stdio.h>
/**
 * main - main function
 * Return: nothing
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		printf("%d ", i);

		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}

	}
	return (0);
}
