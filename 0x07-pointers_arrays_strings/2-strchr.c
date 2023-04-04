#include "main.h"
/**
 * _strchr - Returns a pointer to the first occurrence of the
 * character c in the string s, or NULL if the character is not found
 * @s: string to be check
 * @c: character to check
 * Return: a pointer to s or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *match = "NULL";

	while (*s != '\0')
	{
		if (c == *s)
		{
			i = 1;
			break;
		}
		s++;
	}

	if (i == 0)
	{
		return (match);
	}
	else
	{
		return (s);
	}
}
