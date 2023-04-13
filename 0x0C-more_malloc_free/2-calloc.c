#include "main.h"
#include <stdlib.h>

/**
 * _memset - function that allocates memory for an array
 * @s: par 1
 * @b: par 2
 * @n: par 3
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - function main
 * @nmemb: par 4
 * @size: par 5
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)

		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

