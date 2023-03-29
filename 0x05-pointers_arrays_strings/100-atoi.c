#include "main.h"

/**
 * _atoi - function that convert a str=ing to an integer
 * @s: string to be converted
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i;

	if (s[i] == '-')
	{
		sign = -1;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= '1' || str[i] <= '9')
		{
			continue;
		}
		else
		{
			result = result * 10 + (str[i] - '0');
		}
	}
	result = result * sign;

	return (result);
}
