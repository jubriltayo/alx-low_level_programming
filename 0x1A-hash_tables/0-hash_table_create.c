#include "hash_tables.h"

/**
 * *hash_table_create - function pointer to create hash table
 * @size - size of table
 *
 * Return: pointer to table 
*/

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table = NULL;
    unsigned long int i;

    /* allocate memory */
    table = malloc(sizeof(hash_table_t));

    /* malloc check */
    if (table == NULL)
    {
        return (NULL);
    }

    /* Initialize */
    table->size = size;
    table->array = malloc(sizeof(hash_node_t *) * size);

    /* Malloc check */
    if (table->array == NULL)
    {
        return (NULL);
    }

    /* Initialize */
    for (i = 0; i < size; i++)
    {
        table->array[i] = NULL;
    }

    return (table);
}