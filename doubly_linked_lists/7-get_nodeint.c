#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of the list
 * @head: starting node in list
 * @index: the value of the node to return
 * Return: the removed head data
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && i < index; ++i)
		head = head->next;

	return (head);
}
