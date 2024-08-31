#include "lists.h"
/**
 * free_listint2 - free all elements of a list
 * @head: starting node in list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *eraser;

	/* find how many nodes */
	while (head && *head)
	{
		eraser = *head;
		*head = (*head)->next;
		free(eraser);
	}
	head = NULL;
}
