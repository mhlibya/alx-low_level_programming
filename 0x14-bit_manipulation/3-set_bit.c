#include "main.h"
/**
 * set_bit - lsfg
 * @n: sleirjf
 * @index: lsrihjf
 * Return: lirjfg
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
	return (-1);
return (!!(*n |= 1L << index));
}
