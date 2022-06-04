#include <stdio.h>
 /**
  * main - main function
  * return: 0
  */
 int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(j + '0');
		if (i == 9 && j == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
