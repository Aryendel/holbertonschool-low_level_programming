#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}	
	for (i = 0; i < j/2; i++)
	{
		continue;
	}
	for (; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
