#include "main.h"

/**
 * _isdigit - function that returns 1 if digit and 0 other wise
 * @c: parameter to be examined
 *
 * Return: 1 for a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
