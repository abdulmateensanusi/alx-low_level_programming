#include "main.h"

/**
 * print_line - print an underscore the at n number of times
 * @n: number of times to print the underscore
 * Return: void
 */

void print_line(int n)
{
	int freq = 1;

	if (n > 0)
	{
		while (freq <= n)
		{
			_putchar('_');
			freq++;
		}
	}
	_putchar('\n');
}
