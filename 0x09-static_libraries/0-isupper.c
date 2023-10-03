#include "main.h"

/**
 * isupper - uppercase letters
 * @c: char to heck
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
