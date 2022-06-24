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
	int x;
	int y;
	int z;
	int mult = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	 else if (argc == 3)
	 {
		 for (x = 0 ; x < argc ; x++)
		 {
			 if (x == 1)
			 {
				 y = atoi(argv[x]);
			 }
			 else if (x == 2)
			 {
				 z = atoi(argv[x]);
			 }
		 }
		 mult = y * z;
		 printf("%d\n", mult);
	 }
	 return (0);
}
