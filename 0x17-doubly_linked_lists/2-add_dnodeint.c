#include "lists.h"

/**
 * add_dnodeint - slrij
 * @head: slirjf
 * @n: slirg
 * Return: sldrijg
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new, *h;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
	return (NULL);

new->n = n;
new->prev = NULL;
h = *head;

if (h != NULL)
{
	while (h->prev != NULL)
		h = h->prev;
}

new->next = h;

if (h != NULL)
	h->prev = new;

*head = new;

return (new);
}
