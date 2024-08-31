#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at the nth node of the list
 * @head: starting node in list
 * @idx: the value of the node to return
 * @n: the value to add to the new node
 * Return: NULL if fail, or addr of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!new || !head || (*head == NULL && idx > 0))
		return (NULL);

	/* check for zero idx, meaning before list */
	if (!idx)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	/* else start after first node */
	for (i = 1; temp && i < idx; ++i)
		temp = temp->next;

	if (i != idx)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}
