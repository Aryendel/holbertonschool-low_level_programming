#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ is printed
 */
void print_line(int n)
{
	char line = 95;

	if (n > 0)
	{

		for (; n >= 0; n++)
		{
			straightLine = n * line;
		}
		_putchar(straightLine);
	}
	else
	{
	_putchar('\n');
	}
}
