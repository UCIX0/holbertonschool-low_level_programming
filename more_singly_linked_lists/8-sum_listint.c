#include "lists.h"
/**
 * sum_listint - sum the n values of a listint_t linked list
 * @head: starting node to print in list
 * Return: number of items in list
 */
int sum_listint(listint_t *head)
{
	long int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
