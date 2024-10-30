#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i;
	int j = 0;

	for (i = 0; i < j - 1; i++)
	{
		continue;
	}
	while (str[j] != '\0')
	{
		j++;
	}

	for (i = j/2 + 1; i < j;  i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

