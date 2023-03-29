#include "main.h"

/**
 * _strcpy - copies the string src to dest
 * @src: the string to be copied
 * @dest: the new string copied
 * Return: the new string dest
 */
char *_strcpy(char *dest, char *src)
{
	char *str_original = src;
	int len = 1;
	int i;

	while (*src != '\0')
	{
		len++;
		src++;
	}
	src = str_original;
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
