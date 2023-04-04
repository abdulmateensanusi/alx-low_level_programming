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
	char *match = NULL;
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (c == s[i])
		{
			match = &s[i];
			break;
		}
	}

	return (match);
}
