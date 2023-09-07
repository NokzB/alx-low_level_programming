#include "hash_tables.h"

/**
 * hash_table_get - gets a value from the hash table
 * @ht: the hash table
 * @key: the hey to be found
 *
 * Return: the value associated with the element
 *	Otherwise - return NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];
	if (current == NULL)
		return (NULL);
	while (strcmp(current->key, key) && current != NULL)
	{
		current = current->next;
	}
	if (current == NULL)
		return (NULL);
	else
		return (current->value);
}
