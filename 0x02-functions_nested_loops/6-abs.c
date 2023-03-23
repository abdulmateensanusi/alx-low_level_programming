#include "main.h"

/**
 * _abs - it helps to give the absolute value of a number
 * @n: the number in which its absolute value is returned
 * Return: the absolute value of the number given
 */
int _abs(int n)
{
	int result;

	if (n >= 1)
	{
		result = n;
	}
	else if (n == 0)
	{
		result = 0;
	}
	else
	{
		result = (n * -1);
	}
	return (result);
}
