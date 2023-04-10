#include <stdio.h>
#include "main.h"

/**
 * main - main function
 * @argc: prints the argument counter
 * @argv: prints array of argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
