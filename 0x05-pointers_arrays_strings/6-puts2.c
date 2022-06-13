#include <stdio.h>
#include "main.h"

/**
 *puts2 - print pair values.
 * @str: value to be evaluate.
 *Return: not.
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue
	}
	_putchar('\n');
}
