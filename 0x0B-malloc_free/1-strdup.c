#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copies input string in newly allocated memory
 * @str: input string
 * Return: pointer to duplicate string or NULL if failure
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i = 0;

	if (str == 0)
		return (0);
	while (str[i] != 0)
		i++;
	p = malloc(sizeof(char) * i);
	for (i = 0; str[i] != 0; i++)
		p[i] = str[i];
	p[i] = 0;
	return (p);
}
