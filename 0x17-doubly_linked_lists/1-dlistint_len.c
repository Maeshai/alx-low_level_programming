#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a dlistint_t list
 * @h: pointer to the head of the double list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
	temp = temp->next;
	count++;
	}
	return (count);
}
