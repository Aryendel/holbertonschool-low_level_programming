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
int i = 48;
do {
putchar(i);
i++;
} while (i <= 57);
putchar('\n');
return (0);
}