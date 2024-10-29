#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, h, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (s = 0; s < (size - i) - 1; s++)  /* logic for spaces */
			{
				_putchar(' ');
			}
			for (h = 0; h <= i; h++) /* logic for hashtag*/
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
