#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: starting number
 */
void print_to_98(int n)
{

	if (n <= 98 || n < 0)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				if (n < -9 || n > 9)
				{
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
					if (n < 0)
					{
						_putchar((-n / 10) + '0');
						_putchar((-n % 10) + '0');
					}
				}
				else
				{
					_putchar(n + '0');
				}
			}
			else
			{
				if (n < -9 || n > 9)
				{
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
					_putchar(',');
					_putchar(' ');
					if (n < 0)
					{
						_putchar((-n / 10) + '0');
						_putchar((-n % 10) + '0');
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					_putchar(n + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
	else
	{
		{

			for (; n >= 98; n--)
			{
				if (n == 98)
				{

					if (n < -9 || n > 9)
					{
						_putchar((n / 10) + '0');
						_putchar((n % 10) + '0');
						if (n < 0)
						{
							_putchar((-n / 10) + '0');
							_putchar((-n % 10) + '0');
						}
					}
					else
					{
						_putchar(n + '0');
					}
				}
				else
				{
					if (n < -9 || n > 9)
					{
						_putchar((n / 10) + '0');
						_putchar((n % 10) + '0');
						_putchar(',');
						_putchar(' ');
						if (n < 0)
						{
							_putchar((-n / 10) + '0');
							_putchar((-n % 10) + '0');
							_putchar(',');
							_putchar(' ');
						}
					}
					else
					{
						_putchar(n + '0');
						_putchar(',');
						_putchar(' ');
					}
				}

			}
			_putchar('\n');
		}
	}
}

