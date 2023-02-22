#include"main.h"

/**
 * main - print lowercase letters
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
	}
	_putchar('\n');
	return;
}
