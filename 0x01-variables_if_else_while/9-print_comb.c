#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int x = '0', y = ',', z = ' ';

	while (x <= '9')
	{
		putchar(x);
		if (x < '9')
		{
		putchar(y);
		putchar(z);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
