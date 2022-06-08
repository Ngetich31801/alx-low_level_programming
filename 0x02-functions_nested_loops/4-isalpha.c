#include "main.h"

/**
 * isalpha - checks for alphabetic characters
 * @c: character to check
 *
 * Return: 1 if c is a letter, 0 if otherwise
*/

int isalpha(int c)
{
	if ((c >= "a" && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
