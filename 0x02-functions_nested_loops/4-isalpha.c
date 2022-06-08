#include "main.h"

/**
 * isalpha - checks for alphabetic characters
 * @c: charecter to check
 *
 * Return: 0 or 1
*/
int isalpha(int c)
{
	if ((c >= "a" && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
