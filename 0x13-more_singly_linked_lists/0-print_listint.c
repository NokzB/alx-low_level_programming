#include <stdio.h>
#include "lists.h"

/**
* print_listint - prints all elements of listint_t
* @h: list
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d", h->n);
		h = h->next;
		printf("\n");
	}
	return (nodes);
}
