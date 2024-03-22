#include "lists.h"

/**
 * add_dnodeint - slrij
 * @head: slirjf
 * @n: slirg
 * Return: sldrijg
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));

if (!new)
	return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
