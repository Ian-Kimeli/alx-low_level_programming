#include "main.h"
/**
 * reverse_array - function that reserves the content of an array of integers.
 * @a: point to array
 * @n: number of elements of an array
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int temporary, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temporary = a[counter];
		a[counter++] = a[n];
		a[n--] = temporary;
	}
}
