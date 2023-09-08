#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <studio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 *Return: alwats 0
 */
int main(void)
{
	int n;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m =n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5", n, n);
	else if (n == 0)
	        Printf("Last digit of %d is %d and is zero", n, m);
	else if (m < 6 && m 1- 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
        printf("\n");

	return (0);
}
