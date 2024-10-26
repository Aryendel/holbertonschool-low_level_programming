#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: starting number
 */
void print_to_98(int n)
{
	int two;

	if (n <= 98 || n < 0)
	{
		for (; n <= 98; n++)
		{
			if (n < -9 || n > 9)
			{
				putchar(n + '0');
				putchar(',');
				putchar(' ');
			}
			else
			{
				two = (n / 10) +'0';
				two = (n % 10) + '0';
				putchar(two);
				putchar(',');
				putchar(' ');
			}
		}
		else
		{
			for (; n >= 98; n--)
			{
				if (n < -9 || n > 9)
				{
					putchar(n + '0');
					putchar(',');
					putchar(' ');
				}
				else
				{
					two = (n / 10) +'0';
					two = (n % 10) + '0';
					putchar(two);
					putchar(',');
					putchar(' ');
				}
			}
		}

