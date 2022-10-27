#include <stdio.h>
#include "lists.h"
/**
* free_listint2 - frees a list but sets head to NULL
* @head: the list
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
