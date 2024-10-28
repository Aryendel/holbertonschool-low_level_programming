#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: The character to print
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
