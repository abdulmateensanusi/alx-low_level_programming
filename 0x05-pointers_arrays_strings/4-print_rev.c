#include "main.h"

/**
 * print_rev - prints the string
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int i;
	char temp;
	char *s_original;

	s_original = s;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	s = s_original;
	for (i = 0; i < len; i++)
	{
		temp = *(s + (len - i - 1));
		_putchar(temp);

	}
	_putchar('\n');
}
