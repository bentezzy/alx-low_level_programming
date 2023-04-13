#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: par 1
 * @max: par 2
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		ptr[a] = min++;

	return (ptr);
}
