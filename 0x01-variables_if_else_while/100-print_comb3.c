/*
 *File: 100-print_comb3.c
 *Auth: Ian-Kimeli
 */
#include <stdio.h>
/**
 * main - main function
 *
 *Return: alwats 0
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (!(i > j) || i == j)
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '0';
		i++;
	}
return (0);
}
