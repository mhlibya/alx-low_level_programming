#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_toupper - slfgh
 *
 *@s: kwruf
 *
 * Return: osrigj
 */
char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 97 && s[i] <= 122)
	s[i] = s[i] - 32;
}
return (s);
}
