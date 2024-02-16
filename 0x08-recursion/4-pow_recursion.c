#include "main.h"
/**
 * _pow_recursion - iushf
 * @x: lwfj
 * @y: losidjf
 * Return: oldifjv
 */
int _pow_recursion(int x, int y)
{
int i, n = 1;

if (y < 0)
	return (-1);
if (y == 0)
	return (1);
for (i = 0; i < y; i++)
	n = n * x;
return (n);
}
