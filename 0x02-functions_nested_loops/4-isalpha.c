#include "main.h"

/**
 * isalpha - checks for alphabetic characters
 * @c: character to check
 *
 * Return: 1 if c is a letter, 0 if otherwise
*/

int isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else 
	{
		return (0); 
	}
	_putchar('\n');
}
