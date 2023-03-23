#include "main.h"

/**
 * print_last_digit - this function prints the last digit of any integer
 *
 * @n: integer for the whose last digit is to be printed
 *
 * Return: returns the last digit of the number
 */
int print_last_digit(int n)
{
	int result;

	if (n >= 0)
	{
		result = n % 10;
	}
	else
	{
		result = (n * -1) % 10;
	}
	_putchar('0' + result);

	return (result);
}
