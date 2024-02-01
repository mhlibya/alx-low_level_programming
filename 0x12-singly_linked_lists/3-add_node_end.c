#include "lists.h"
/**
 * bstrlen - risljf
 * @s: dirfjil
 * Return: ldkfijv
 */
int bstrlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
	;
return (i);
}
/**
 * add_node_end - slufhu
 * @head: owiefjowi
 * @str: soijf
 * Return: wouifj
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
list_t *node = *head;

if (!head || !new_node)
	return (NULL);
if (str)
{
new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}
new_node->len = bstrlen(new_node->str);
}
if (node)
{
while (node->next)
	node = node->next;
node->next = new_node;
}
else
{
*head = new_node;
}
return (new_node);
}
