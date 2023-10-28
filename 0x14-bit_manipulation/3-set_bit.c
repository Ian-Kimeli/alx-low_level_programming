#include "main.h"

/**
 * set_bit - prog sets the value of a bit to 1 at a given index
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: 1 if success, or -1 if an error occured
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
