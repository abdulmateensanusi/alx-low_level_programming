#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	int in_t;
	long int lint;
	long long int llint;
	float fl;

	printf("Size of a char: %lu byte(s)\n", sizeof(ch));
	printf("Size of an int: %lu byte(s)\n", sizeof(in_t));
	printf("Size of a long int: %lu byte(s)\n", sizeof(lint));
	printf("Size of a lomg long int: %lu byte(s)\n", sizeof(llint));
	printf("Size of a float: %lu byte(s)\n", sizeof(fl));

	return (0);
}
