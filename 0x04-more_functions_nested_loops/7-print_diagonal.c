#include "main.h"

/**
 * print_diagonal - print a backslash the at n number of times
 * @n: number of times to print the underscore
 * Return: void
 */

void print_diagonal(int n)
{
	int freq = 1;
	int i;

	if (n > 0)
	{
		while (freq <= n)
		{
			for (i = 1; i <= freq; i++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
			freq++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
