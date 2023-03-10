#include "main.h"

/**
 * factorial - factorial of any number
 * @n: character
 * Return: n * !(n - 1)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

