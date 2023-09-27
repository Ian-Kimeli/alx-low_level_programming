#include "main.h"

/**
 * _puts_recursion - Prints a string folowed by a new line
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		
	}
}
