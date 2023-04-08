#include "lists.h"
/**
 * add_nodeint - add a node to the front of the list
 * @head: address of first node pointer
 * @n: int value for new node
 * Return: NULL if fail, or ptr to first item of list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new || !head || !n)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
