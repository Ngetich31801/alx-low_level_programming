#include "main.h"

/**
 *  _isupper - checks for upper case character
 *  @c: the character to check for
 *  Description: checks for upper character.
 *  Return: 1 if c is upper case. 0 otherwise
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
