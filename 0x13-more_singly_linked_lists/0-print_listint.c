#include "lists.h"
/**
 * print_listint - vdlkfg
 * @h: oierjfiej
 * Return: ljrng
 */
size_t print_listint(const listint_t *h)
{
size_t i = 0;

while (h->next != NULL){
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
