#include <stdio.h>
/**
 * main - Prints out the last part of a quote in the standard error.
 * Return: 0 if success
 */
int main(void)
{
	char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, ch, sizeof(ch));
	return (0);
}
