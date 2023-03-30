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
	char *p = dest;
	while (*src != '\0' && n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*p = '\0';
		p++;
		n--;
	}
	return (dest);
}
