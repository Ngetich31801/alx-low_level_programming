#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of size with char c
 * @size: unsigned int x
 * @c: char type
 * Return: Return pointer to array created
 */
char *create_array(unsigned int size, char c);
{
	char *s;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc((size) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (x < size)
	{
		s[x] = c;
		x++;
	}
	s[x] = '\0';
	return (s);
}
