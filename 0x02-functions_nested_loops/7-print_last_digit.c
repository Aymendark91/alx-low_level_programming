#include "main.h"

/**
 * print_last_digit - print the last digit
 * @c: checks character
 *
 * Return: Always 0
 */
int print_last_digit(int c)
{
	int n;

	if (c < 0)
	{
		c = -c
	}
	n = c % 10;

	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
