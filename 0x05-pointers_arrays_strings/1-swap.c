#include "main.h"

/**
 * swap_int - swap two pointer
 * @a: checks character
 * @b: checks character
 * 
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
