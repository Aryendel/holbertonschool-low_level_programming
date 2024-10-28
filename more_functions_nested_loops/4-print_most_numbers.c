#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Return: nothing
 */
void print_most_numbers(void)
{

	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		_putchar(numbers + '0');
		if (numbers == 2 || numbers == 4)
		{
			continue;
		}
	}
	_putchar('\n');
}
