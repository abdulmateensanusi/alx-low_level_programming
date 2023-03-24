#include "main.h"

/**
 * print_square - print # at n number of times
 * @size: number of times to print the underscore
 * Return: void
 */

void print_square(int size)
{
	int freq;
	int i;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (freq = 1; freq <= size; freq++)
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
