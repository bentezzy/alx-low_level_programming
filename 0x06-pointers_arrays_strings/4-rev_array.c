#include "main.h"

/**
 * reverse_array - function to reverse array a
 * @a: array to be reversed
 * @n: parameter 1
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int e;
	int b;

	for (e = 0; e < n--; e++)
	{
		b = a[e];
		a[e] = a[n];
		a[n] = b;
	}
}
