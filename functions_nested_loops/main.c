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
 * main - check the code
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	print_alphabet();
	print_alphabet_x10();
	return (0);
}
