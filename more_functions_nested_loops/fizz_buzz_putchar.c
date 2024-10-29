#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j;
	char w1[] = "FizzBuzz";
	char w2[] = "Fizz";
	char w3[] = "Buzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			for (j = 0; j < 9; j++)
			{
				putchar(w1[j]);
				putchar(' ');
			}
			continue;
		}
		if (i % 3 == 0)
		{
			for (j = 0; j < 5; j++)
			{
				putchar(w2[j]);
				putchar(' ');
			}
			continue;
		}
		if (i % 5 == 0)
		{
			for (j = 0; j < 5; j++)
			{
				putchar(w3[j]);
				putchar(' ');
			}
			continue;
		}
		putchar(i);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
