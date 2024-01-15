#include "main.h"
#include <stdlib.h>

/**
 * _strdup - vs/rioj;gd
 *
 * @str: vlisrjhfij
 *
 * Return: vslirj;fo
 */

char *_strdup(char *str)
{
int i, j;
char *result;

if (str == NULL)
	return (NULL);
for (j = 0; str[j] != '\0'; j++)
	;
result = malloc(sizeof(char) * (j + 1));
for (i = 0; str[i] != '\0'; i++)
{
result[i] = str[i];
}
return (result);
}
