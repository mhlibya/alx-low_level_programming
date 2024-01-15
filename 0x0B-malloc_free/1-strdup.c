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
int i;
char *result = malloc(sizeof(str) + 1);

if (str == NULL)
	return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
result[i] = str[i];
}
return (result);
}
