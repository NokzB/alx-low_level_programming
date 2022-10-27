#include <stdio.h>
#include "lists.h"
/**
* get_nodeint_at_index - prints the nth node of a linked list
* @head: the beginning of the linked list
* @index: index of the node
* Return: head or null if the index doesnt exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
