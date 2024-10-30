#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: string
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (_putchar(str[i]) == '\0')
		{
			return;
		}
		i++;
	}
	if (_putchar('\n') == '\0')
	{
		return;
	}
}
