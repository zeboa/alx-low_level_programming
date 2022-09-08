#include <stdio.h>

/**
 * main - print the size of variouse types
 * Return: 0 if exited propely, non zero otherwise
 */

int main(void)
{
	printf("Size of a char: %z byte(s)\n", sizeof(char));
	printf("Size of an int: %z byte(s)\n", sizeof(int));
	printf("Size of a long int: %z byte(s)\n", sizeof(long int));
	printf("Size of long long int: %z byte(s)\n", sizeof(long long int));
	printf("Size of a float: %z byte(s)\n", sizeof(float));
		return (0);
}
