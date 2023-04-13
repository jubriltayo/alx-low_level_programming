#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated wtih a key in a hash table
 *
 * @ht: hash table
 * @key: key of an index
 *
 * Return: value for success, NULL for fail
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht || !key)
		return (0);

	/* access index through key_index function */
	index = key_index((const unsigned char *)key, ht->size);

	/* loop through index for matching key */
	while (ht->array[index] != NULL)
	{
		if (*ht->array[index]->key == *key)
			return (ht->array[index]->value);

		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
