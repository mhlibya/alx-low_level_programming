#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: always return 0
 */
void print_alphabet_x10(void)
{
int k;
int i;
for (i = 0; i < 10; i++)
{
for (k = 'a'; k <= 'z'; k++)
	_putchar(k);
_putchar('\n');
}
}
