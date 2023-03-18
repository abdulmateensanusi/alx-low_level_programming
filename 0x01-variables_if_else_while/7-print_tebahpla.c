#include <stdio.h>

/**
 *main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *alph_r = "zyxwvutsrqponmlkjihgfedcba\n";
	int i  = 0;

	while (alph_r[i] != '\0')
	{
		putchar(alph_r[i]);
		i++;
	}
	return (0);
}
