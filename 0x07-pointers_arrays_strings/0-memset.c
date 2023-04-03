#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: parameter 1
 * @b: parameter 2
 * @n: parameter 3
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for ( ; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
