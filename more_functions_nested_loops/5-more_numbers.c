#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j;
	char numbers[] = "01234567891011121314\n";

	for (i = 0; i < 10; i++)
	{

		for (j = 0; j < 20; j++)
		{
			_putchar(numbers[j]);
		}
		_putchar('\n');
	}
}

