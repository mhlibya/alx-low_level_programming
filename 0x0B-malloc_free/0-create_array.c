#include "main.h"
#include <stdlib.h>

/**
 * create_array - erijfg
 *
 * @size: fpworjif
 * @c: vpwjrpf9k
 *
 * Return: wpsriwjfpwoj
 */
char *create_array(unsigned int size, char c)
{
char *j = malloc(size);

if (size == 0 || j == 0)
	return (0);
while (size--)
{
j[size] = c;
}
return (j);
}
