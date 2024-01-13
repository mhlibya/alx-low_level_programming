#include "main.h"

/**
 * _isupper - checks if c is uppercase
 *
 *@c: variable
 *
 * Return: return1 if c is uppercase and0 otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
	return (1);
else
	return (0);
}
