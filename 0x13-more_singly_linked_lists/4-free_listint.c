#include "lists.h"
/**
 * free_listint - skjrfbh
 * @head: sljkrf
 */
void free_listint(listint_t *head)
{
listint_t *node;

while (head)
{
node = head;
head = node->next;
free(node);
}
}
