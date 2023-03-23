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

	result = n % 10;
	if (result < 0)
	{
		result = result * -1;
	}
	_putchar('0' + result);

	return (result);
}
