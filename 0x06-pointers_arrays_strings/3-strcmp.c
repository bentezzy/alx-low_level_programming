#include "main.h"

/**
 * _strcmp - main function
 * @s1: parameter 1
 * @s2: parameter 2
 *
 * Return: return the difference
 */

int _strcmp(char *s1, char *s2)
{
	int b;

	b = 0;
	while (s1[b] != '\0' && s2[b] != '\0')
	{
		if  (s1[b] != s2[b])
		{
			return (s1[b] - s2[b]);
		}
		b++;
	}
	return (0);
}
