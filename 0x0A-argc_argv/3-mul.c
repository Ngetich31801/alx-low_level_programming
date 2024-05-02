#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print name
 * @argc: int.
 * @argv: char.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    int y, z, mult;

    if (argc != 3)
    {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;  // Indicates error
    }

    y = atoi(argv[1]);
    z = atoi(argv[2]);

    mult = y * z;
    printf("%d\n", mult);

    return 0;
}
