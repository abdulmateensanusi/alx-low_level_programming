#include "main.h"

/**
 * reverse_array - reverses a array
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int mid;
	int i;
	int temp[n];

	mid = n / 2;
	for (i = 0; i < mid; i++)
	{
		temp[i] = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp[i];
	}
}

