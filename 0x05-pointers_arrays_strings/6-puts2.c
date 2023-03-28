#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 != 0)
		{
			str++;
			i++;
			continue;
		}
		else
		{
			_putchar(*str);
			str++;
			i++;
		}
	}
	_putchar('\n');
}
