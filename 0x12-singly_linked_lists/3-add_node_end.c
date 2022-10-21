#include "lists.h"

/*
* add_node_end - adds a node at the end of the list
* @head: pointer to pointer to the head of the list
* @str: string to be duplicated
* Return: address to the new element, NULL if failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new;
	list_t *tmp;

	new = malloc(sizeof(list_t));
	if (str == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	if (*head == NULL)
	{
		*head = new;
		new->len = i;
		new->str = strdup(str);
		new->next = NULL;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;

	new->len = i;
	new->str = strdup(str);
	new->next = NULL;
	return (new);
}
