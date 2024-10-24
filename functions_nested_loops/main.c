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
 * _islower - check for lowercase character.
 *
 * Return: On success 1.
 * On error, 0 is returned.
 *
 *@c: c parameter is the ASCII value of a character
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
return (0);
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
	{
		int r;

		r = _isalpha('H');
		_putchar(r + '0');
		r = _isalpha('o');
		_putchar(r + '0');
		r = _isalpha(108);
		_putchar(r + '0');
		r = _isalpha(';');
		_putchar(r + '0');
		_putchar('\n');
	}
	return (0);
}
