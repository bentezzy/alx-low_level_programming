#include "main.h"

/**
 * _strcat - function to copy string
 * @dest: parameter 1
 * @src: parameter 2
 *
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
		a++;
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

