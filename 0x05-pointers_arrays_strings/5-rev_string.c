#include "main.h"

/**
 * rev_string - lsfjvnsljfvn
 *
 * @s: jgfhd
 */

void rev_string(char *s)
{
int l, i;
char g;

for (l = 0; s[l] != '\0'; l++)
	;

for (i = 0; i < l / 2; i++)
{
g = s[i];
s[i] = s[l - 1 - i];
s[l - 1 - i] = g;
}
}
