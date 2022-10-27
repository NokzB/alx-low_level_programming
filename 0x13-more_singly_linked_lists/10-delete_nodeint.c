#include <stdio.h>
#include "lists.h"
/**
* delete_nodeint_at_index - deletes a node at the index of a linked list
* @head: the linked list
* @index: index of the linked list
* Return: 1 if succeeded, -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *temp = *head;
	unsigned int i;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	new = temp->next;
	temp->next = new->next;
	free(new);
	return (1);
}
