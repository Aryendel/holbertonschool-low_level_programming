#include "main.h"
/**
 * _isalpha - check for alphabetic character.
 *
 * Return: On success 1.
 * On error, 0 is returned.
 *
 *@c: c parameter is the ASCII value of a character
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
return (0);
}
