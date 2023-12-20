#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the alphabet a -> z
 *
 * Return: always return 0
 */

void print_alphabet(void)
{
int c;

for(c = 'a'; c <= 'z'; c++)
	_putchar(c);
_putchar('\n');

}
