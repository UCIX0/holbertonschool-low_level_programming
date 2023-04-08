#include "lists.h"
/**
 * free_list - free all elements of a list
 * @head: starting node in list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *eraser;

	/* find how many nodes */
	while (head)
	{
		eraser = head;
		head = head->next;
		free(eraser->str);
		free(eraser);
	}

}
