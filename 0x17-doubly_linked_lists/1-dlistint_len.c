#include "lists.h"

/**
 * dlistint_len - slirjf
 * @h: soufj
 * Return: lsidhfv
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;
while(h){
h = h->next;
i++;
}
return (i);
}
