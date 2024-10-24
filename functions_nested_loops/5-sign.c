#include "main.h"
/**
 * print_sign - prints the sign of a number.
 *
 * Return: 1 is greater than zero; 0 if n is zero and -1 if n is less than zero
 * @n: Number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
return (0);
}
