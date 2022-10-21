#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t list
* @head: the beginningof the list
* @str: string to be duplicated
* Return: the address of the new element, NULL if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *newhead;

	newhead = malloc(sizeof(list_t *));

	if (str == NULL)
	{
		newhead->str = NULL;
		newhead->len = 0;
		newhead->next = *head;
	}
	if (newhead == NULL)
	{
		return (NULL);
	}
	newhead->next = *head;
	*head = newhead;
	newhead->str = strdup(str);
	{
		for (i = 0; str[i]; i++)
			;
	}
	newhead->len = i;
	return (newhead);
}
