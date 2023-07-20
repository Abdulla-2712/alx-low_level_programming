#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int x = '0', y = '0';

	while (x < '9')
	{
		while (y <= '9')
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x != '8' || y != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		y = '1';
		x++;
	}
	putchar('\n');
	return (0);
}
