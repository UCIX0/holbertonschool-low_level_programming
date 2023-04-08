#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a specific index
 * @head: starting node in list
 * @index: note to remove
 * Return: 1 if succeed -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = *head, *fixer;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	/* iterate to the indexed node */
	for (i = 0; tmp && i < index; ++i, tmp = tmp->next)
		fixer = tmp;

	if (i == index)
	{
		fixer->next = tmp->next;
		free(tmp);
		return (1);
	}
	return (-1);
}
