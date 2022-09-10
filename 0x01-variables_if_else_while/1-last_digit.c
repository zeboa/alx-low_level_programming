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
	
	printf("Last digit of %i is %i ", n, n % 10);
	
	if ((n % 10) > 5))
	{
		printf("and is greater than 5\n", n);
	}
	else if ((n % 10) == 0))
	{
		printf("and is zero\n", n);
	}
	
	else if (((n % 10) < 6 && (n % 10) !=0 )))
	{
		printf("and is less than 6 and not 0\n", n);
	}

	return (0);
}
