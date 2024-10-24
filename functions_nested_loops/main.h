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
 * @c: c parameter is the ASCII value of a character
 */
int _islower(int c);
/***
 * _isalpha - checks for alphabetic character.
 *
 * Return: On success 1.
 * On error, 0 is returned.
 * @c: c parameter is the ASCII value of a character
 */
int _isalpha(int c);
#endif
