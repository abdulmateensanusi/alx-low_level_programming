#include "main.h"

/**
 * print_triangle - print # at n number of times in a triangle format
 * @size: number of times to print the underscore
 * Return: void
 */

void print_triangle(int size)
{
	int freq;
	int i;
	int temp;
	int n;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			temp = size - i;
			for (freq = 1; freq <= temp; freq++)
			{
				_putchar(' ');
			}
			for (n = 0; n < i; n++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
