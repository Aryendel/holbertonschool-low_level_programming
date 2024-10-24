#include "main.h"
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
/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: nothing.
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
return;
}
/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times.
 *
 * Return: nothing.
 *
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		print_alphabet();
		_putchar('\n');
	}
_putchar('\n');
return;
}
