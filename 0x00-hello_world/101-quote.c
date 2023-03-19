#include <stdio.h>
#include <unistd.h>

/**
 * main -Entry point
 *
 * Return: 1 when successful
 */
int main(void)
{
	char *mssg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, mssg, 59);

	return (1);
}
