#include "main.h"

/**
 * _strncat - sfolgvj
 *
 * @dest: rifgn
 * @src: weprifj
 * @n: psierjf
 *
 * Return: s;ilrjf
 */
char *_strncat(char *dest, char *src, int n)
{
int g, j;

while (dest[g])
	g++;
for (j = 0; j < n && src[j] != '\0'; j++)
	dest[g + j] = src[j];
return (dest);
}
