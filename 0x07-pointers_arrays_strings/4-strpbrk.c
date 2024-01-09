#include "main.h"

/**
 * _strpbrk - srufh
 *
 * @s: pvf
 * @accept: ldihrg
 *
 * Return: rijfg
 */
char *_strpbrk(char *s, char *accept)
{
int i, j, k;
char *a;

for (i = 0; s[i] != accept[i]; i++)
	return (NULL);
for (j = i, k = 0; a = a, s[j] != '\0'; j++, k++)
	a[k] = s[j];
a[(k + 1)] = '\0';
return (a);
}
