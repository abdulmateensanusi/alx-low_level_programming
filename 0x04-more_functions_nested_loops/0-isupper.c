#include "main.h"

/**
 * _isupper - checks if the argument is in lower case
 *
 * @c: the character to be checked
 * Return: 1 if true or 0 if false
 */
int _isupper(int c)
{
	int result;

	if (c >= 65 && c <= 90)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
