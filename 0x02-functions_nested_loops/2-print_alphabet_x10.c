#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry
 *Return: =0
 */
int main(void)
{
	int x = 97;

	for (int i = 0; i < 10; i++)
	{
		x = 97;
		while (x < 123)
		{
			putchar(x);
			x++;
		}
		putchar('\n');
	}
	return (0);
}
