#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: name of the matrix
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int first_diag = 0;
	int second_diag = 0;

	for (i = 0; i < size; i++)
	{
		first_diag += *(a + i * size + i);
		second_diag += *(a + i * size + size - 1 - i);
	}

	printf("%d, %d\n", first_diag, second_diag);
}
