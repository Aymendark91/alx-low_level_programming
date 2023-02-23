#include "main.h"

/**
 * print_sign - print sign
 * @n: checks character
 *
 * Return: 1 if postive 0 if it is 0 else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
