#include "lists.h"
/**
 * list_len - count elements in list
 * @node: starting node to print in list
 * Return: number of elements in list
 */
size_t list_len(const list_t *node)
{
	int i = 0;

	while (node)
	{
		++i;
		node = (*node).next;
	}

	return (i);
}
