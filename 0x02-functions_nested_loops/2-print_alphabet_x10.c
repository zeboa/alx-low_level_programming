#include "main.h"

/**
 * main - prints lowercase alphabet 10times
 * Return: 0 if exited propely, non zero otherwise
 */

void print_alphabet(void)
{
	char ch, i;
	for (i=0; i<=9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}
