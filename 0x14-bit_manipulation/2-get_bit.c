#include "main.h"

/**
 * get_bit - returns val of bit at index given
 * @n: number for search
 * @index: bit index
 *
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);
	val = (n >> index) & 1;

	return (val);
}
