#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The  character to point
 *
 * Retyrn: on success 1.
 * On error, Return: -1, errno is set appropriatelt.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
