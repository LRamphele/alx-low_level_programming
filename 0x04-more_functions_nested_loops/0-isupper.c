#include "stdio.h"

/**
 * isupper - check for upper case letter
 * @c : character to check the case
 * Return: 1 if c is uppercase , 0 otherwise
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
