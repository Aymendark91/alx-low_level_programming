#include "main.h"

/**
 * _pow_recursion - x raised value of y
 * @x: character
 * @y: character
 * Return: Success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
