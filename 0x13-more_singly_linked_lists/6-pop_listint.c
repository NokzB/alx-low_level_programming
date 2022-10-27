#include <stdio.h>
#include "lists.h"
/**
* pop_listint - deletes the head node from a linked list
* @head: the linked list
* Return: 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	(*head)->next = 0;

	free(*head);
	*head = temp;
	return (data);
}
