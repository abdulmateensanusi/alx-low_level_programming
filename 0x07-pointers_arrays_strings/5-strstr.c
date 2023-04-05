#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0)
 * @haystack: pointer to the string to be checked
 * @needle: pointer to the substring
 * Return:  a pointer to the beginning of the located substring,
 *  or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *match = NULL;
	int i, j, k;
	int length = 0;

	while (needle[length] != '\0')
	{
		length++;
	}

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				for (k = 0; k < length; k++)
				{
					if (needle[i + k] != haystack[j + k])
					{
						break;
					}
					if (k == (length - 1))
					{
						match = &haystack[j];
						break;
					}
				}
			}
			if (match != NULL)
			{
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
