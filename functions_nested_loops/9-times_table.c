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

			if (y > 0) /* No spacing before first row */
			{
				if (product < 10)
				{
					_putchar(' '); /* Space for single numbers to fit the format */
				}
			}

			if (product < 10)
			{
				_putchar(product + '0');
			} else
			{
				_putchar((product / 10) + '0'); /* Displaying two ASCII numbers */
				_putchar((product % 10) + '0');
			}

			if (y < 9) /* column and space until 9th row */
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
