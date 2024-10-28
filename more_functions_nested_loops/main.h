#ifndef MAIN_H
#define MAIN_H
/**
 * _isupper - checks for uppeercase character
 * @c: character
 * Return: 1 if c is uppercase; 0 otherwise
 */
int _isupper(int c);
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * _isdigit - checks for a digit
 * @c: The character to print
 */
int _isdigit(int c);
/**
 * mul - multiplies two integers.
 */
int mul(int a, int b);
/**
 * print_numbers - prints the numbers, from 0 to 9
 */
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void newline(void);
#endif
