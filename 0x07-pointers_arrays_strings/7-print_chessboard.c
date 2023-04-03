#include "main.h"
#include <stdio.h>

#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the array containing the chessboard data
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}

