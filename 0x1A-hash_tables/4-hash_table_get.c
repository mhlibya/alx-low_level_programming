#include"hash_tables.h"

/**
 * hash_table_get - aslfidhg
 * @ht: ;alsdihf
 * @key: asoufh
 * Return: lasdhf
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
int  index;
char *value;
hash_node_t *temp;

index = key_index((unsigned char *)key, ht->size);
if (!ht->array[index])
	return (NULL);
temp = ht->array[index];
value = temp->value;
return (value);
}
