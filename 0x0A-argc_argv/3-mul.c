#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers.
 * @argc: number of arguments passed into the program
 * @argv: array of string passed into the program
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int result;
	int val = 0;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		val = 1;
	}
	return (val);
}
