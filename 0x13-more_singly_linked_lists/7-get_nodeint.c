#include "lists.h"
/**
 * get_nodeint_at_index - skurfhks
 * @head: askeufh
 * @index: sleifj
 * Return: sliefj
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; i < index; i++)
{
if (!head)
	return (NULL);
head = head->next;
}
return (head);
}
