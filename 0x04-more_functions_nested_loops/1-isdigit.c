#include "main.h"

/**
 * _isdigit - checks if the argument is in lower case
 *
 * @c: the character to be checked
 * Return: 1 if true or 0 if false
 */
int _isdigit(int c)
{
	int result;

	if (c >= 48 && c <= 57)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
