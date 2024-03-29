#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at index of a
* doubly linked list
*
* @head: double pointer to the head of the list
* @index: index of the new node
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *n1;
	dlistint_t *n2;
	unsigned int i;

	n1 = *head;

	if (n1 != NULL)
		while (n1->prev != NULL)
			n1 = n1->prev;

	i = 0;
	while (n1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = n1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				n2->next = n1->next;

				if (n1->next != NULL)
					n1->next->prev = n2;
			}
			free(n1);
			return (1);
		}
		n2 = n1;
		n1 = n1->next;
		i++;
	}
	return (-1);
}
