#include "main.h"

/**
 * _strstr - jhfgkgy
 *
 * @haystack: fworihf
 * @needle: roifjr
 *
 * Return: sirjf
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *one = haystack;
char *two = needle;

while (*one == *two && *two != '\0')
{
one++;
two++;
}

if (*two == '\0')
return (haystack);
return (needle);
}
return (NULL);
}
