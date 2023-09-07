#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table to be printed
 *
 * Return: the key/value in the order they appear in
 *         the array of the hash table
 *         Otherwise - print NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current;
	char *sep = "";

	if (ht == NULL)
		return;

	putchar('{');
	while (i < ht->size)
	{
		current = ((ht->array)[i]);
		while (current)
		{
			printf("%s'%s': '%s'", sep, current->key, current->value);
			sep = ", ";
			current = current->next;
		}
		i++;
	}
	putchar('}');
	putchar('\n');
}
