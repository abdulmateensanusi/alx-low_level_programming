#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that adds positive numbers.
 * @argc: number of arguments passed into the program
 * @argv: array of string passed into the program
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;
	int val = 0;
	int result = 0;
	int no_val = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= 48 && *argv[i] <= 57)
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				val = 1;
				return (val);
			}
		}
			printf("%d\n", result);
	}
	else
	{
		printf("%d\n", no_val);
	}
	return (val);
}
