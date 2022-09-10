#include <stdio.h>

/**
 * main - prints lowercase alphabet except q and e
 * Return: 0 if exited propely, non zero otherwise
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
