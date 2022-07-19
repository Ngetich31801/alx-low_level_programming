#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a list_t list
 * @h: singly linked list print
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wettra -std=gnu89 0-main.c 0-print_listint.c -o a
julien@ubuntu:~/0x13. More singly linked lists$ ./a
9
8
-> 2 elements
julien@ubuntu:~/0x13. More singly linked lists$ 
