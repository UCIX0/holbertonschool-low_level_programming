#include "lists.h"
/**
 * free_listint - free all elements of a list
 * @head: starting node in list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *eraser;

	/* find how many nodes */
	while (head)
	{
		eraser = head;
		head = head->next;
		free(eraser);
	}
}
