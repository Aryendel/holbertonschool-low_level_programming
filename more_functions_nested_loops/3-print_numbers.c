#include "main.h"
/** 
 * print_numbers - prints the numbers, from 0 to 9
 * Return: nothing
 */
void print_numbers(void)
{

	int numbers;

	for (numbers = 0; numbers >= 48 && numbers <= 57; numbers++)
	{
		_putchar(numbers);
	}
	_putchar('\n');
}

