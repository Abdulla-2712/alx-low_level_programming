#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 *main - entry
 *Return: =0
 */
int main(void)
{
	int x;

	if (x > 0)
	{
		print_sign(x);
		putchar(',');
		putchar(' ');
		putchar('1');
	}
	else if (x == 0)
	{
		print_sign(x);
		putchar(',');
		putchar(' ');
		putchar('0');
	}
	else
	{
		print_sign(x);
		putchar(',');
		putchar(' ');
		putchar('-');
	}
	return (0);
}
