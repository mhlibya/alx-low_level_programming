#include "lists.h"
/**
 * insert_nodeint_at_index - slkjf
 * @head: ksdfg
 * @idx: skrjfh
 * @n: ksuhef
 * Return: skufh
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *nod, *node = malloc(sizeof(listint_t));
unsigned int i = 0;

if (!head || !node)
	return (NULL);

node->n = n;
node->next = NULL;
if (!idx)
{
node->next = *head;
*head = node;
return (node);
}
nod = *head;
while (nod)
{
if (i == idx - 1)
{
node->next = nod->next;
nod->next = node;
return (node);
}
i++;
nod = nod->next;
}
free(node);
return (NULL);
}
