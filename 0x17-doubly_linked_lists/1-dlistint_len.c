#include "lists.h"

/**
 * dlistint_len - Returns number of elements in a linked list
 * @h: Pointer to first node of linked list
 *
 * Return: Number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int elem = 0;

	while (h != NULL)
	{
		h = h->next;
		++elem;
	}
	return (elem);
}
