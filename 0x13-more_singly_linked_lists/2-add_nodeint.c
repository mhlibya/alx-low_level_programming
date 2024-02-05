#include "lists.h"
/**
 * add_nodeint - soiurfhg
 * @head: sleurfh
 * @n: slirjf
 * Return: wurfh
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr = malloc(sizeof(listint_t));

if (!head || !ptr)
	return (NULL);
ptr->next = NULL;
ptr->n = n;
if (*head)
	ptr->next = *head;
*head = ptr;
return (ptr);
}
