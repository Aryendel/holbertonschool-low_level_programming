#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: None
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			int product = x * y;

			if (product < 10)
			{
				_putchar(' '); /* spacing to fit with the two numbers format */
				_putchar(product + '0');
			} else
			{
				_putchar((product / 10) + '0'); /* if two numbers */
				_putchar((product % 10) + '0');
			}

			/* ',' et ' ' until 9th number */
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
