#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 * Return: an integer, which is the length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	else
	{
		return (i);
	}
}
/**
 * is_palindrome_helper - helps to get if a string is a palindrome
 * @s: string to check
 * @start: beginning of the string
 * @end: end of the string
 * Return: either 1 if palindrome or 0 if not
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - checks if a string is a palindrome using 2 functions
 * @s: string to check
 * Return: an integer 0 or 1
 */
int is_palindrome(char *s)
{
	char *str_original;
	int len;

	str_original = s;
	len = _strlen_recursion(s);
	s = str_original;
	return (is_palindrome_helper(s, 0, len - 1));
}
