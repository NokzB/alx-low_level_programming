#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: list to be printed
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
