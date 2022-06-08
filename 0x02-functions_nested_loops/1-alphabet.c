#include "main.h"

/**
 * print_alphabet - prints the english alphabet from a-z.
 *
 * Return: 0
 *
 */
void print_alphabet(void)
{
	char abc = 'a';
	do {
		_putchar(abc);
		abc++;
	} while (abc <= 'z');
	_putchar('\n');
	return (0);
}
