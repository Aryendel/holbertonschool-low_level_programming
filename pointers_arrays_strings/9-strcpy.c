#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: buffer position
 * @src: string pointed
 * Return: the value of the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
