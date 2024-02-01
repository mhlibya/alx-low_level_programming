#include "lists.h"
/**
 * _strlen - ksujhdf
 * @s: owurfh
 * Return: osirjf
 */
int _strlen(char *s)
{
size_t i;

if (s == NULL)
	return (0);
for (i = 0; s[i] != '\0'; i++)
	;
return (i);
}

/**
 * print_list - sukdhfuk
 * @h: wefuiohwoeufh
 * Return: woefjiowirjf
 */
size_t print_list(const list_t *h)
{
int i = 0;

while (h)
{
printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
i++;
}
return (i);
}
