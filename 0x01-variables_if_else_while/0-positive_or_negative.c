#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * This program will assign a random number to n each time it is executed.
 * return: 0 if executed properly
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
		else if (n < 0)
	{
		printf("%i is negative\n", n);
	}

	return (0);
}
