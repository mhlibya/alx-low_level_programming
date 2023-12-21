#include "main.h"

/**
 * _isdigit - checks if c is a numericaldigit
 *
 * Return: return1 if it is and0 otherwise
 *
 * @c: variable
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
else
	return (0);
}
