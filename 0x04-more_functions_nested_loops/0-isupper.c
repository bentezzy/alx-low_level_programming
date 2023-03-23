#include "main.h"
/**
 * _isupper - function that returns 1 for uppercase and 0 for lowercase
 * @c: parameter to be checked
 *
 * Return: 1 if uppercase and 0 if lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
