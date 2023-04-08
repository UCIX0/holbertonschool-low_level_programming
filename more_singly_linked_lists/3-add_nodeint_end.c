#include "lists.h"
/**
 * add_nodeint_end - add a node to the front of the list
 * @head: address of first node pointer
 * @n: int value for new node
 * Return: NULL if fail, or ptr to first item of list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	int i;

	if (!new || !head)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	/* find the tail of head */
	while (*head)
	{
		++i;
		head = &(*head)->next;
	}

	*head = new;

	return (*head);
}
