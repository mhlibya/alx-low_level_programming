#include "main.h"

/**
 * print_line - prints a line
 *
 * @n: variable
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
	putchar('_');
putchar('\n');
}
