#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * @s: pointer to the string s
 * @accept: pointer to the string accept
 * Return:  a pointer to the byte in s that matches one of the
 *  bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *match = NULL;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = &s[i];
				break;
			}
		}
		if (match != NULL)
		{
			break;
		}
	}
	return (match);
}
