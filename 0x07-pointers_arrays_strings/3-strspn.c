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
int i = 0;

do {
i++;
} while (*s == *accept);
return (i);
}
