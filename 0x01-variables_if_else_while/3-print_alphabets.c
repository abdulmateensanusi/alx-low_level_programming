#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *alph = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int i = 0;

	while (alph[i] != '\0')
	{
		putchar(alph[i]);
		i++;
	}

	return (0);
}
