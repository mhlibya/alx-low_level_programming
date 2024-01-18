#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - difjc
 * @b: epifjcpi
 * Return: peifjiej
 */
void *malloc_checked(unsigned int b)
{
int *i = malloc(b);

if (i == 0)
{
exit(98);
}
return (i);
}
