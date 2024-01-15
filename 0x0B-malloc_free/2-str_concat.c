#include "main.h"
#include <stdlib.h>
/**
 * str_concat - jfj
 *
 * @s1: jgyjv
 * @s2: kuhgkb
 *
 * Return: jhgkgy
 */
char *str_concat(char *s1, char *s2)
{
int i, j, k;
char *g;

for (j = 0; s1[j] != '\0'; j++)
	;
for (; s2[j] != '\0'; j++)
	;
if (s1 == NULL || s2 == NULL)
	return (0);
g = malloc(sizeof(char) * (j + 1));

for (i = 0; s1[i] != '\0'; i++)
	g[i] = s1[i];
for (k = 0; s2[k] != '\0'; i++, k++)
	g[i] = s2[k];
g[i + 1] = '\0';
return (g);
}
