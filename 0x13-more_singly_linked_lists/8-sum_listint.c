#include "lists.h"
/**
 * sum_listint - jhkyg
 * @head: jyg
 * Return: kjughku
 */
int sum_listint(listint_t *head)
{
int i = 0;

while (head)
{
i += head->n;
head = head->next;
}
return (i);
}
