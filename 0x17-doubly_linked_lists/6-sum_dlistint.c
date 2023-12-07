#include "lists.h"

/**
 * sum_dlistint - sums up all the data (n) in a dlistint_t list
 * @head: pointer to the head of the doubly linked list
 * Return: sum of all data values
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *node = head;

	while (node)
	{
	sum += node->n;
	node = node->next;
	}

	return (sum);
}
