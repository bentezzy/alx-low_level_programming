#include "main.h"

/**
 * _islower - function that checks for lower case character
 *
 * @c: parameter to be printed
 *
 * Return: 1 for _islower lower case and 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
