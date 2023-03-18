#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char *hex_digits = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(hex_digits[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
