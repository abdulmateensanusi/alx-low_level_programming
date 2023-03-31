#include "main.h"

/**
 * cap_string - changes every word of a string to upper case
 * @str: string to be  changed
 * Return: changed string
 */

char *cap_string(char *str)
{
	int i, j;
	char *character[13] = {" ", "\t", "\n", ",", ".", ";"
		, "?", "\"", "!", "(", ")", "{", "}"};
	int match_found;


	for (i = 0; str[i] != '\0'; i++)
	{
		match_found = 0;
		for (j = 0; j < 13; j++)
		{
			if (str[i] == character[j][0])
			{
				match_found = 1;
				break;
			}
		}

		if ((str[i] >= 'a' && str[i] <= 'z') && 
				(match_found == 1))
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
