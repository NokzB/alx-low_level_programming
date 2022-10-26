#include <stdio.h>
#include "lists.h"
/**
* add_nodeint_end - adda a node at the end of a linked list
* @head: the address of the list
* @n: the list
* Return: the address of the list, or NULL is failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	if (!head)
		return (0);

	new = malloc(sizeof(listint_t));

	if (!new)
		return (0);

	new->n = n;
	new->next = 0;

	end = *head;

	if (!end)
	{
		*head = new;
		return (new);
	}
	while (end->next)
		end = end->next;
	end->next = new;
	return (*head);
}
