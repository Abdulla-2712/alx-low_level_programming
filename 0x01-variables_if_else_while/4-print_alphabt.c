#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry
 *Return: =0
 */
int main(void)
{
	char a = 97;

	while (a < 123)
	{
	if (a == 101 || a == 113)
	{
	a++;
	continue;
	}
	putchar(a);
	a++;
	}
	printf("\n");
	return (0);
}

