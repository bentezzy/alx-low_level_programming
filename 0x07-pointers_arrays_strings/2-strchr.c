#include "main.h"

/**
 * _strchr - function that locates character in a string
 * @s: string
 * @c:
 * searched character in a string
 *
 * Return: return character c
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
