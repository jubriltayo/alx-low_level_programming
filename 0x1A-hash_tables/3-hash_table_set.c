#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 *
 * @ht: hash table to be add or updated
 * @key: key of an index
 * @value: value of an index
 *
 * Description:
 *		key cant be an empty string
 *		value must be duplicated, value can be an empty string
 *
 * Return: 1 for success, 0 for fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *value_copy = NULL, *key_copy = NULL;
	unsigned long int index;
	hash_node_t *new_node = NULL;

	if ((!ht) || (!key))
		return (0);
	/* duplicate the value, check return value of malloc created by strdup */
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	key_copy = strdup(key);
	if (key_copy == NULL)
		return (0);

	/* retrieve the index using key_index function*/
	index = key_index((const unsigned char *)key, ht->size);
	/* if key already exists, free memory, assign value_copy */
	if (ht->array[index] && *(ht->array[index]->key) == *key)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = value_copy;
		return (1);
	}
	else /* if key doesnt exist */
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		/* assign key, value, next */
		new_node->key = key_copy;
		new_node->value = value_copy;
		new_node->next = NULL;
		/* make new_node the head */
		if (ht->array[index])
		{
			new_node->next = ht->array[index];
		}
		ht->array[index] = new_node;
		return (1);
	}
}
