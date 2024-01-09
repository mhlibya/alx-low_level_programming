#include "main.h"

/**
 * _strspn - hugrty
 *
 * @s: feuhf
 * @accept: pvifrjg
 *
 * Return: jygfji
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
int j;

for (j = 0; s[j] != '\0'; j++)
{
for (j = 0; accept[j] != '\0'; j++)
	if (accept[j] == '\0')
		return (i);
}
return (i);
}
