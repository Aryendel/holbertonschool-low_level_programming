#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ is printed
 */
void print_line(int n)
{
	int underscore = 95;
	int count = 0;

	while (count < n)
	{
		count++;
		_putchar(underscore);
	}
	_putchar('\n');

}
