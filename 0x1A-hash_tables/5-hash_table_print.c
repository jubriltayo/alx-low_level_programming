#include "hash_tables.h"

/**
 * hash_table_print - prints keys and values in a hash table
 *
 * @ht: hash table
 * @key: key of an index
 *
 * Return: value for success, NULL for fail
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	char *separator = NULL;

	if (ht)
	{
		printf("%s", "{");
		while (index < ht->size)
		{
			while (ht->array[index] != NULL)
			{
				if (separator != NULL)
					printf("%s", separator);
				printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
				ht->array[index] = ht->array[index]->next;
				separator = ", ";
			}
			index++;
		}
		printf("%s\n", "}");
	}
}
