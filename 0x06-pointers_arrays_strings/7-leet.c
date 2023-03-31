#include "main.h"

/**
 * leet - encodes a string
 * @str: string to be encoded
 * Return: a pointer to the string
 */

char *leet(char *str)
{
	int i, j;
	char letters[10] = "aAeEoOtTlL";
	char numbers[10] = "4433007711";


	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
				break;
			}
		}
	}
	return (str);
}
