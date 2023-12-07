#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head of double list
 * @n: new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
/**
 * add_dnodeint -  adds a new node at the beginning
 * @head: head of double list
 * @n: new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/**
 * insert_dnodeint_at_index -  inserts a new
 * node at a given position
 * @h: head of double list
 * @idx: index where to insert
 * @n: value to insert
 * Return: address of the new node
 * or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int count = 0;

	if (h == NULL)
	return (NULL);

	if (idx == 0)
	return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	current = *h;
	while (current != NULL && count < idx)
	{
	if (count + 1 == idx)
	{
	if (current->next == NULL)
	return (add_dnodeint_end(h, n));
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;
	new_node->prev = current;
	return (new_node);
	}
	current = current->next;
	count++;
	}

	free(new_node);
	return (NULL);
}
