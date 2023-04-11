#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of passed into the program
 * @argc: the number of arguments
 * @argv: an array of strings passed into the program
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
