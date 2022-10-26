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

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		end = *head;

		while (end->next != NULL)
		{
			end = end->next;
			end->next = new;
		}
	}
	return (*head);
}
