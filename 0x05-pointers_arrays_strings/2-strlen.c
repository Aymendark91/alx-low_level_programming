#include "main.h"

/**
 * _strlen - strlen
 * @s: checks character
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
