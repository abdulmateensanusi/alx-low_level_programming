#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to  dest string
 * @src: poinetr to src string which is to be concatenated to dest string
 * @n: number of bytes to increase the pointer to
 * Return: returns a pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i = 0;

	while (*p != '\0')
	{
		p++;
	}

	while (i < n)
	{
		if (*src != '\0')
		{
			*p = *src;
			src++;
		}
		p++;
		i++;
	}
	*p = '\0';

	return (dest);
}
