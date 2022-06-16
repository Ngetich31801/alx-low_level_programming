#include "main.h"
/**
 * string_toupper - Changes all lowercase letters
 *
 * of a string to uppercase.
 * @str: The string to be changed.
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *)
{
	int j = 0;

	char str[] = "uppercase\n";
	char ch;

	while (str[j])
	{
		ch = str[j];
		putchar(toupper(ch));
		j++;
	}
	return (str);
}
