#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 * Return: 1 if characters letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
