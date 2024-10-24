#include "main.h"
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
