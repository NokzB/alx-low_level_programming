#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 *
 * @head: pointer to the head of the list
 * Return: freed list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
