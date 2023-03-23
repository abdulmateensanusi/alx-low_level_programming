#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int a = 1;
	int b = 2;
	int temp;

	printf("%d, %d, ", a, b);
	for (i = 1; i <= 50; i++)
	{
		temp = a + b;
		printf("%d, ", temp);
		a = b;
		b = temp;
	}
	putchar('\n');
}
