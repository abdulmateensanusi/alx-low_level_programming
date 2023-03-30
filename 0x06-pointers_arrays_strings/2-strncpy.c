#include "main.h"

/**
 * _strncpy - copies two strings
 * @dest: pointer to  dest string
 * @src: poinetr to src string which is to be concatenated to dest string
 * @n: number of bytes to increase the pointer to
 * Return: returns a pointer to resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p;
	int i = 0;
	char *src_original = src;
	char *dest_original = dest;
	int length = 0;
	int length2 = 0;

	while (*src != '\0')
	{
		length++;
		src++;
	}
	while (*dest != '\0')
	{
		length2++;
		dest++;
	}
	dest = dest_original;
	src = src_original;
	p = dest;
	while (i < n)
	{
		if (*src != '\0')
		{
			*p = *src;
			src++;
		}
		i++;
		p++;
	}
	while (n < length2)
	{
		if (n < length)
		{
			*p = dest[i];
			p++;
		}
		else
		{
			p++;
		}
		n++;
	}

	*p = '\0';

	return (dest);
}
