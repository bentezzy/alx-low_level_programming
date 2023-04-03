#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: array parameter
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int h;
	int b;

	for (h = 0; h < 8; h++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[h][b]);
		_putchar('\n');
	}
}
