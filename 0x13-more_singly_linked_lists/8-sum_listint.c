#include <stdio.h>
#include "lists.h"
/**
* sum_listint - returns the sum of all the data in a linked list
* @head: the beginning of the linked list
* Return: the sum of the data or 0 if list is empty
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
