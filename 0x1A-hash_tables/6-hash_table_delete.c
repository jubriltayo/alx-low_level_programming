#include "hash_tables.h"

/**
 * hash_table_delete - frees keys, values, nodes in a hash table
 *
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp = NULL;

	if (ht)
	{
		for (index = 0; index < ht->size; index++)
		{
			while (ht->array[index])
			{
				temp = ht->array[index]->next;
				free(ht->array[index]->key);
				free(ht->array[index]->value);
				free(ht->array[index]);

				ht->array[index] = temp;
			}
		}
	}
}
