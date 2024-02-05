#include "lists.h"
/**
 * listint_len - ldjg
 * @h: dltgjn
 * Return: dltjng
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;

while (h)
{
h = h->next;
i++;
}
return (i);
}
