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

for (j = 0; str[j] != '\0'; j++)
	;
if (j == 0 || str == NULL)
	return (NULL);
result = malloc(sizeof(char) * (j + 1));
for (i = 0; str[i] != '\0'; i++)
{
result[i] = str[i];
}
result[i + 1] = '\0';
return (result);
}
