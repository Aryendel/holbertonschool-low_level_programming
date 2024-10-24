#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times.
 *
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
/**
 * main - check the code
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	print_alphabet();
	print_alphabet_x10();
	{
		int r;

		r = _islower('H');
		_putchar(r + '0');
		_putchar('\n');
	}
	return (0);
}
