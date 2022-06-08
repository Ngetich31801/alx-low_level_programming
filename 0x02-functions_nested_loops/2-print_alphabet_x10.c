#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 *
 * Return: always 0
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 'a'; j <= 'z' ; j++)
		{
			_putchar(j);
		}
	}
	return (0);
}
