#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines > 5 | < 6 | 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = m % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is greater than 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 6\n", n, l);
	}

	return (0);
}
