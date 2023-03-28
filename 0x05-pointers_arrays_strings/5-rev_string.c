#include "main.h"

/**
 * rev_string - reverses the string
 * @s: the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int middle;
	int length = 0;
	int i;
	char temp;
	char *s_original = s;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s = s_original;
	middle = length / 2;
	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
