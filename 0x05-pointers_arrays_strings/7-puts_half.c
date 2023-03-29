#include "main.h"

/**
 * puts_half - prints every the second half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	char *s_original = str;
	int middle;
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	str = s_original;
	if (length % 2 == 0)
	{
		for (middle = length / 2; middle < length; middle++)
		{
			_putchar(str[middle]);
		}
	}
	else
	{
		for (middle = length / 2; middle < length; middle++)
		{
			_putchar(str[middle]);
		}
	}
	_putchar('\n');
}
