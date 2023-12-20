#include "main.h"

/**
 *_isalpha - checking if the charackter is alphabetic
 *
 * @c: a variable
 *
 * Return: 1ifcisaletter 0otherwise
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
	return (1);
if (c >= 97 && c <= 122)
	return (1);
return (0);
}
