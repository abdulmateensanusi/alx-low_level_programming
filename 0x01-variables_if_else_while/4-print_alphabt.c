#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *alp = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (alp[i] != '\0')
	{
		if (alp[i] == 'q' || alp[i] == 'e')
		{
			i++;
		}
		else
		{
			putchar(alp[i]);
			i++;
		}
	}

	return (0);
}
