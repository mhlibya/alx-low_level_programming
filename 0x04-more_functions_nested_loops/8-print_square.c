#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: size of the square
 *
 * Return: always 0
 */
void print_square(int size)
{
int row, column;

for (row = 1; row <= size; row++)
{
for (column = 1; column <= 1 ; column++)
	_putchar('#');
_putchar('\n');
}
}
