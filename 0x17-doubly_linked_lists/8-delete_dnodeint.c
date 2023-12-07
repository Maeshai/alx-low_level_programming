#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a specified index
 * @head: double pointer to the head of the doubly linked list
 * @index: the index of the node that should be deleted
 * Return: 1 if successful, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *to_delete;
	unsigned int count = 0;

	if (!head || !*head)
	return (-1);

	current = *head;
	if (index == 0)
	{
	*head = current->next;
	if (*head != NULL)
	(*head)->prev = NULL;
	free(current);
	return (1);
	}

	while (current != NULL && count < index)
	{
	count++;
	current = current->next;
	}

	if (current == NULL)
	return (-1);

	to_delete = current;
	if (to_delete->next != NULL)
	to_delete->next->prev = to_delete->prev;

	if (to_delete->prev != NULL)
	to_delete->prev->next = to_delete->next;

	free(to_delete);
	return (1);
}
