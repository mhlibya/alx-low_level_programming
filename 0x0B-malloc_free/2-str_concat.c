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
int i, j, k, x;
char *g;

for (j = 0; s1[j] != '\0'; j++)
	;
for (x = 0; s2[x] != '\0'; j++, x++)
	;
if (s1 == NULL && s2 == NULL)
	return (NULL);
else if (s1 == NULL)
	return (s2);
else if (s2 == NULL)
	return (s1);
g = malloc(sizeof(char) * (j + 1));

for (i = 0; s1[i] != '\0'; i++)
	g[i] = s1[i];
for (k = 0; s2[k] != '\0'; i++, k++)
	g[i] = s2[k];
g[i + 1] = '\0';
return (g);
}
