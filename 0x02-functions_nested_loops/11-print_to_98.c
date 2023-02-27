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
				printf("%d, ", x);
			}
			else if (n == 98)
			{
				printf("%d\n", x);
			}
		}
	}
	else if (n >= 98)
	{
		for (y = n; y >= 98; y--)
		{
			if (n != 98)
			{
				printf("%d, ", y);
			}
			else if (n == 98)
			{
				printf("%d\n", y);
			}
		}
	}
}
