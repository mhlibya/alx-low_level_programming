#include"hash_tables.h"

/**
 * key_index - fouig
 * @key: sfough
 * @size: soufgh
 * Return: asldhg
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
if (key == NULL || size == 0)
	return (EXIT_FAILURE);
return (hash_djb2(key) % size);
}
