#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - weijfpiw
 * @s1: wpiejfp
 * @s2: ijfpwirj
 * @n: sowfjkwij
 * Return: ;irjfwij
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, s1l, s2l;
char *str;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (s1l = 0; s1[s1l] != '\0'; s1l++)
	;
for (s2l = 0; s2[s2l] != '\0'; s2l++)
	;
str = malloc(s1l + n + 1);

if (str == NULL)
	return (NULL);

for (i = 0; s1[i] != '\0'; i++)
	str[i] = s1[i];
for (j = 0; j < n; j++, i++)
	str[i] = s2[j];
str[i] = '\0';
return (str);

}
