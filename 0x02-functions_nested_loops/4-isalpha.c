#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c:the character to be checked
 * Return: 1 is true or 0 if false
 */
int _isalpha(int c)
{
	int result;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
