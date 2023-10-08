#include "main.h"

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: on successs 1.
 * On error, -1 is returned, and errno is set appropritely
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
