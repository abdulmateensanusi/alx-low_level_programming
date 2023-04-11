#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the number of argument passed into the funcion
 * @argv: an array of string passed into the pogram
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
