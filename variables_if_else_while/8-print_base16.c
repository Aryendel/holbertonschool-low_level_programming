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
int i2 = 65;
do {
putchar(i);
i++;
} while (i <= 57);
do {
putchar(i2);
i2++;
} while (i2 <= 70);
putchar('\n');
return (0);
}
