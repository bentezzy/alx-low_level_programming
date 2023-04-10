#include <stdio.h>
#include "main.h"

/**
 * main - function that prints name of prog
 * @argc: prints number of arguments
 * @argv: prints array of argumrnts
 *
 * Returns: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
