#include "main.h"

/**
 * get_endianness - checks if machineendianness
 *
 * Return: 1 for big, 0 for small
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *d = (char *) &a;

	return (*d);
}
