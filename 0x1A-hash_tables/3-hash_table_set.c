#include "hash_tables.h"
/**
 * new_node - create a new node
 * @key: node key
 * @value: node value
 *
 * Return: new node
 */

hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *temp;

	temp = malloc(sizeof(hash_node_t));

	if (temp == NULL)
		return (NULL);

	temp->key = strdup(key);
	if (temp->key == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->value = strdup(value);
	if (temp->value == NULL)
	{
		free(temp->key);
		free(temp);
		return (NULL);
	}

	temp->next = NULL;

	return (temp);
}
/**
 * hash_table_set - add an item into a hash table
 * @ht: pointer to hash table
 * @key: key of the entry
 * @value: value of the entry
 *
 * Return: 1(success) 0(failure)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp, *current;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	temp = new_node(key, value);
	temp->next = ht->array[index];
	ht->array[index] = temp;

	return (1);
}
