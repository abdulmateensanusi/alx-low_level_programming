#include "main.h"

/**
 * string_toupper - changes a string to upper case
 * @str: string to change
 * Return: changed string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] + 'A' - 'a';
		}
		else
		{
			continue;
		}
	}
	return (str);
}
