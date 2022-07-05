#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Return: 0
 */
int main(void)

{
	char lower_case = 'a';
	char UPPER_CASE = 'A';

	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}
	while (UPPER_CASE <= 'Z')
	{
		putchar(UPPER_CASE);
		UPPER_CASE++;
	}
	putchar('\n');
	return (0);
}
