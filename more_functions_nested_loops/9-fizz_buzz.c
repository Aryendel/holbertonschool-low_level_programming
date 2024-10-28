#include <stdio.h>
/**
 * main - main function
 * Return: nothing
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
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
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		printf("%d ", i);

	}
	return (0);
}
