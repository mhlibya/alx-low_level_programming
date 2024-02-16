#include "main.h"
/**
 * _print_rev_recursion - wfh
 * @s: jhg
 */
void _print_rev_recursion(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
	;
for (; i >= 0; i--)
	_putchar(s[i]);
}
