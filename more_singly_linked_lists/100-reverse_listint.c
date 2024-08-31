#include "lists.h"
/**
 * reverse_listint - reverse a singly linked list
 * @head: starting node in list
 * Return: a pointer to the fisrt node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (!head || !*head)
		return (NULL);

	prev = *head;
	next = (*head)->next;
	prev->next = NULL;

	while (next)
	{
		*head = next;
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
	}

	return (*head);
}
