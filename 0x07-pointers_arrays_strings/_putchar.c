#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: the character to print
 * Return: Always 1 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
