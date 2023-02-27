#include<stdio.h>
#include "main.h"

/**
 * print_to_98 - print numbers to 98
 * @n: checks character
 */
void print_to_98(int n)
{
	int x, y;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (n != 98)
			{
				printf("%d, ", a);
			}
			else if (n == 98)
			{
				printf("%d\n", a);
			}
		}
	}
	else if (n >= 98)
	{
		for (b = n; b >= 98; b--)
		{
			if (n != 98)
			{
				printf("%d, ", b);
			}
			else if (n == 98)
			{
				printf("%d\n", b);
			}
		}
	}
}
