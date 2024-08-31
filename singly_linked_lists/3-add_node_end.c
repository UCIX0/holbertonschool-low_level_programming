#include "lists.h"
/**
 * add_node_end - add a node to the end of the list
 * @head: address of first node pointer
 * @str: the string to add in the new node
 * Return: NULL if fail, or ptr to the new item at end of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int sz = 0;
	list_t *new = malloc(sizeof(list_t));

	if (!new || !head || !str)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	/* verify strdup */
	if (!new->str)
	{
		free(new->str);
		free(new);
		return (NULL);
	}

	while (new->str[sz])
		++sz;
	new->len = sz;
	new->next = NULL;

	/* find the tail of head */
	while (*head)
	{
		++sz;
		head = &(*head)->next;
	}

	*head = new;

	return (*head);
}
