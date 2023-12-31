#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: destination string
 * @src: source string pointer
 * @n: number of byte to be printed
 *
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count_of_bytes;

	for (count_of_bytes = 0; count_of_bytes < n && src[count_of_bytes] != '\0'; count_of_bytes++)
		dest[count_of_bytes] = src[count_of_bytes];

	for (; count_of_bytes < n; count_of_bytes++)
		dest[count_of_bytes] = '\0';

	return (dest);
}
