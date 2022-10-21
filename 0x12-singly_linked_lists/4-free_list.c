#include "lists.h"

/**
* free_list - frees a list_t list.
* @head: pointer to the list.
* Return: freed list
**/

void free_list(list_t *head)
{
	list_t *firstnode;
	list_t *newnode;

	if (head)
	{
		firstnode = head;
		newnode = head->next;
		while (newnode)
		{
			free(firstnode->str);
			free(firstnode);
			firstnode = newnode;
			newnode = newnode->next;
		}
		free(firstnode->str);
		free(firstnode);
	}
}
