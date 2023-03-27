#include "main.h"

/**
 * _strcpy - main function
 * @dest: parameter 1
 * @src: parameter 2
 *
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int t = 0;
	int i = 0;

	while (*(src + t) != '\0')
	{
		t++;
	}
	for ( ; i < t ; i++)
	{
		dest[i] = src[i];
	}
	dest[t] = '\0';
	return (dest);
}
