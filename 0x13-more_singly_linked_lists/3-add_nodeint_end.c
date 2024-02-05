#include "lists.h"
/**
 * add_nodeint_end - slhf
 * @head: jhg
 * @n: jkhgk
 * Return: jkhghk
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr = malloc(sizeof(listint_t));
listint_t *node;

ptr->next = NULL;
ptr->n = n;
if (!*head)
	*head = ptr;
else
{
node = *head;
while (node->next)
	node = node->next;
node->next = ptr;
}
return (ptr);
}
