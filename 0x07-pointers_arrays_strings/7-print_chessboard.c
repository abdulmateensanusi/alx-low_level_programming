#include "main.h"
/**
 * print_chessboard - prints the chess board
 * @a: the name of the 2D array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	char str;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			str = a[i][j];
			_putchar(str);

			if (j == 7)
			{
				_putchar('\n');
			}
		}
	}
}
