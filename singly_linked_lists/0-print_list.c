#include "lists.h"
/**
 * print_list - print the str of linked list and return values in list
 * @node: starting node to print in list
 * Return: number of items in list
 */
size_t print_list(const list_t *node)
{
	int i = 0;

	while (node)
	{
		if (!node->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", node->len, node->str);
		++i;
		node = (*node).next;
	}

	return (i);
}
