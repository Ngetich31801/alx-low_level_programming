#include <stdio.h>

/**
 * main - prints the file it was compiled from
 * Return: Everything is ok
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
			return (0);
}
