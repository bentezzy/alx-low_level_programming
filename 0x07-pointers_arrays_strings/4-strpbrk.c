#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: parameter 1
 * @accept: parameter 2
 *
 * Return: s or 0
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
			if (*s == accept[a])
			return (s);
			}
		s++;
		}

	return ('\0');
}
