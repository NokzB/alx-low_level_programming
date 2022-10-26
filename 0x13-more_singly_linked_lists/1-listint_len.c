#include "lists.h"
#include <stdio.h>

/**
* listint_len - returns a number of elements in a linked list
* @h: list
* Return: nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
