#include "main.h"
/**
 * flip_bits - wiufh
 * @n: woiejf
 * @m: eurfh
 * Return: wourfh
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xr = n ^ m;
unsigned int count = 0;

while (xr)
{
if (xr & 1ul)
	count++;
xr = xr >> 1;
}
return (count);
}
