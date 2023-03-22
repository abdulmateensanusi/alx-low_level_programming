#include "main.h"

/**
 * print_sign - check the sign of a number
 * @n: the number to be checked
 * Return: 1,0 or-1 if the number n is >0,0 or < 0
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	else
	{
		result = -1;
		_putchar('-');
	}
	return (result);
}
