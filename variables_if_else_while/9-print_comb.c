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
int i;
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	return (0);
}
