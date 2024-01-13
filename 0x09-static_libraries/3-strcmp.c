#include "main.h"

/**
 * _strcmp - ;difjg
 *
 * @s1: wrilfj
 * @s2: slrifj
 *
 * Return: wprifj
 */

int _strcmp(char *s1, char *s2)
{
int u = 0;

while (*s1)
{
if (*s1 != *s2)
{
u = ((int)*s1 - (int)*s2);
break;
}
s1++;
s2++;
}
return (u);
}
