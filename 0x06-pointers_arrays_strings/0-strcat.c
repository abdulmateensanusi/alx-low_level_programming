#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to  dest string
 * @src: poinetr to src string which is to be concatenated to dest string
 * Return: returns a pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';

	return (dest);
}
