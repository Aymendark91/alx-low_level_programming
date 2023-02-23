#include "main.h"

/**
 * _abs - absloute value
 *
 * @c: checks character
 * Return: Always 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = (-1) * c;
	}
	return (c);
}
