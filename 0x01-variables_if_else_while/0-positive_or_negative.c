#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 *main - Entry point
 *Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (num > 0)
	printf("is positive");
	if (num == 0)
	printf("is zero");
	if (num < 0)
	printf("is negative");

	return (0);
}
