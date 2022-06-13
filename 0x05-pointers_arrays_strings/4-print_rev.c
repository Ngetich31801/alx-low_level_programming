#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * fcounter is to first count to end, n is to count back
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int line;

	for (line = 0; s[line] != '\0'; line++)
	{
	}
	for (line = line - 1; line >= 0; line--)
	{
		_putchar(s[line]);
	}
	_putchar('\n');
}
