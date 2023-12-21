#include "main.h"

/**
 * print_diagonal - prints diagonal
 *
 * @n: variable
 */

void print_diagonal(int n)
{
int i, s;
if (n <= 0)
	putchar('\n');

else
{
for (i = 1; i <= n; i++)
{
	for (s = 1; s <= i; s++)
		putchar(' ');


	putchar(92);
	putchar('\n');
}
}
}
