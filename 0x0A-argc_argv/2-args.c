#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argc: number of arguments passed into the program
 * @argv: array of strings passed into the program
 * Return: Akways 0 (Success)
 */
int main(int argc, char **argv)
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
