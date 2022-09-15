#include "main.h"

/**
 * _isupper - checks for upper characters
 * @c: the character to check
 * Return: 1 if characters are lower, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else

		return (0);
}
