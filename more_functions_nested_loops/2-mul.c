#include "main.h"
/**
 * mul - multiplies twwo integers
 * @a: first parameter
 * @b: second paramter
 * Return: 0
 */
int mul(int a, int b)
{
	int result;

	result =  a * b;
	_putchar((result / 10) + '0');
	_putchar((result % 10) + '0');
	return (0);
}
