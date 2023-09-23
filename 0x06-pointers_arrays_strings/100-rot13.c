#include "main.h"
/**
 * @rot13: Shifts each letter of string b 13 places in the alphabet
 *
 * Return: Always 0.
 */
char *rot13(char *s)
{
	char *ptr = s;

	while (*s)
	{
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'z'))
		{
			char base = (*s >= 'a' && *s <= 'z') ? 'a' : 'A'; *s = ((*s - base + 13) % 26) + base;
		}
		s++;
	}
	return (ptr);
}
