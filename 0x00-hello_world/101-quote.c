#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints out the last part of a quote in the standard error.
 * Return: 1 if success
 */
int main(void)
{
	char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, ch, sizeof(ch));
	return (1);
}
