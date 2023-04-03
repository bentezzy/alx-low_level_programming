#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = 0;

	for ( ; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
