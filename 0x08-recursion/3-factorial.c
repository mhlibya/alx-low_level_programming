#include "main.h"
/**
 * factorial - sirejf
 * @n: apiejdf
 * Return: soiurjf
 */
int factorial(int n)
{
int i, f = 1;

if (n == 0)
	return (1);
if (n < 0)
	return (-1);

for (i = 1; i <= n; i++)
	f = f * i;
return (f);
}
