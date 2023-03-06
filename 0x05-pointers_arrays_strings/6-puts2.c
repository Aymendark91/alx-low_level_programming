#include "main.h"
#include <string.h>

/**
 * puts2 - print every other character
 * @str: checks character
 *
 */
void puts2(char *str)
{
	int i;
	char s[32] = "";

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);
		s[i/2] = str[i];
	}
}
