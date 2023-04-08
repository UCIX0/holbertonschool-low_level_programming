#include "lists.h"

/**
 * listint_len - count the nodes
 * @node: starting node to print in list
 * Return: number of items in list
 */
size_t listint_len(const listint_t *node)
{
	size_t i = 0;

	while (node)
	{
		++i;
		node = (*node).next;
	}

	return (i);
}
