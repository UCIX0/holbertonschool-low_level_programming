#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: starting node in list
 * Return: the removed head data
 */
int pop_listint(listint_t **head)
{
	listint_t *eraser;
	int rtrn_val = 0;

	if (head && *head)
	{
		eraser = *head;
		rtrn_val = eraser->n;
		*head = (*head)->next;
		free(eraser);
	}

	return (rtrn_val);
}
