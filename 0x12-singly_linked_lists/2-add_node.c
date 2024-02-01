#include "lists.h"
/**
 * astrlen - kuhkuh
 *  @s: jgvfj
 *  Return: kughuk
 */
int astrlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
	;
return (i);
}
/**
 * add_node - s;idfj
 * @head: soirfj
 * @str: skufh
 * Return: wejiof
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_head = malloc(sizeof(list_t));

if (!head || !new_head)
{
return (NULL);
}
if (str)
{
new_head->str = strdup(str);
if (!new_head->str)
{
free(new_head);
return (NULL);
}
new_head->len = astrlen(new_head->str);
}
new_head->next = *head;
*head = new_head;
return (new_head);
}
