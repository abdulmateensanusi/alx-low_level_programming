#include "main.h"

/**
 * _islower - checks if the argument is in lower case
 *
 * Return: 1 if true or 0 if false
 */
int _islower(int c)
{
	int result;

	if (c >= 97 && c <= 122)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
