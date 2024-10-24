#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar (char c);
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times.
 */
void print_alphabet_x10(void);
/**
 * _islower - checks for lowercase character.
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */
int _islower(int c);
#endif
