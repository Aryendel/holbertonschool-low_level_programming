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
/**
 * print_sign - prints the sign of a number.
 *
 * Return: 1 if n is greater than zero; 0 if zero and -1 if n less than zero
 * @n: Number
 */
int print_sign(int n);
/**
 * _abs - computes the absolute value of an integer.
 * Return: the absolute value of an integer
 * @int: integer value
 */
int _abs(int);
/**
 * print_last_digit - prints the last digit of a number.
 * Return: the value of the last digit.
 * @int: integer type
 */
int print_last_digit(int);
/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 */
void jack_bauer(void);
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void);
/**
 * add - adds two integers and returns the result.
 * @int: takes two integers types
 * @int: two integer type
 * Return: the result of the addition
 */
int add(int, int);
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: number
 */
void print_to_98(int n);
#endif
