#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * Return: modulo of the variable, returning last digit.
 * @x: the integer variable
 */
int print_last_digit(int x)
{
	int lastDigit = x % 10;

	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}
	_putchar('0' + lastDigit); /* ASCII conversion of number */
	return (lastDigit);
}
