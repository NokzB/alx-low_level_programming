#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at end of a doubly linked list
 * @head: Pointer to pointer of first node
 * @n: Integer to store in node
 *
 * Return: Address of new element, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *curr;

	curr = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (curr->next)
			curr = curr->next;
		new_node->prev = curr;
		curr->next = new_node;
	}
	return (new_node);
}
