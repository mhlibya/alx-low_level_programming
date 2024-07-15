#include"search_algos.h"

/**
 * binary_search - a function that applies binary search to find a value
 *
 * @array: the array that contains the value
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index of the value
 */
int binary_search(int *array, size_t size, int value)
{
size_t i = 0;
size_t j;
size_t mid;
size_t end = size - 1;

if (array == NULL)
{
return (-1);
}
while (i <= end)
{
printf("Searching in array: ");
for (j = i; j < end; j++)
{
printf("%d, ", array[j]);
}
printf("%d\n", array[end]);
mid = i + (end - i) / 2;

if (array[mid] < value)
{
i = mid + 1;
}
else if (array[mid] > value)
{
end = mid - 1;
}
else
{
return (mid);
}
}

return (-1);
}
