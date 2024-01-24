#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - ksjdfgh
 * @array: werufh
 * @size: skerufh
 * @action: ksjenhf
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

for (i = 0; i < size; i++)
	action(array[i]);
}
