#include "function_pointers.h"
/**
 * int_index - jhvjh
 * @array: iwurfh
 * @size: owieufj
 * @cmp: owifuwu
 * Return: souerfhou
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, n;
if (size <= 0)
	return (-1);
for (i = 0; i < size; i++)
{
n = cmp(array[i]);
if (n != 0)
{
break;
}
}
if (n == 0)
	i = -1;
return (i);
}
