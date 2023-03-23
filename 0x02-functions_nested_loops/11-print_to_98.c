#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all integer from the parameter given to 98
 * @n: parameter to be given
 * Return: void (no return value)
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	putchar('\n');
}
