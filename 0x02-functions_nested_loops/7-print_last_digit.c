#include "main.h"

/**
 * print_last_digit - returns it
 *
 * @x: variable
 *
 * Return: always x
 */
int print_last_digit(int x)
{
int n;
if (x < 0)
	n = (-1) * (x % 10);
else
	n = x % 10;
_putchar(n + '0');
return (n);
}
