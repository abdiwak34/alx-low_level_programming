#include "main.h"

/**
 * print_chessboard - prints 8*8 cheese
 * @a: the arr
 * prints the chess
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j]);
		}
	}
}
