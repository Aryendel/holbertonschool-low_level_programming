#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, i2, com, space;
i2 = 57;
com = 46;
space = 32;
for (i = 48; i <= 56; i++)
{
	putchar(i);
	putchar(com);
	putchar(space);
}
putchar(i2);
	return (0);
}
