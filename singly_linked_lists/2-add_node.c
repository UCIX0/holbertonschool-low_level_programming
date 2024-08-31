#include "lists.h"
/**
 * add_node - add a node to the front of the list
 * @head: address of first node pointer
 * @str: the string to add in the list
 * Return: NULL if fail, or ptr to first item of list
 */
list_t *add_node(list_t **head, const char *str)
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
	new->next = *head;

	*head = new;

	return (*head);
}
