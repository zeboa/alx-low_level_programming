#include "main.h"

/**
 * main - prints lowercase alphabet
 * Return: 0 if exited propely, non zero otherwise
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
