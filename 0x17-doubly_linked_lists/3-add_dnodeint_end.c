#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head of the double list
 * @n: data for the new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last_node;

	if (new_node == NULL || head == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	}
	else
	{
	last_node = *head;
	while (last_node->next != NULL)
	last_node = last_node->next;

	last_node->next = new_node;
	new_node->prev = last_node;
	}

	return (new_node);
}
