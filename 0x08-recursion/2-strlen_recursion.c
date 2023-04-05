#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 * Return: an integer, which is the length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	else
	{
		return (i);
	}
}
