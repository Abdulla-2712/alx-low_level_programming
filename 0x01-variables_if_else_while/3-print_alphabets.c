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
	putchar(a);
	a++;
	}
	a = 65;
	while (a < 91)
	{
	putchar(a);
	a++;
	}
	a = 36;
	printf("%c\n", a);
	return (0);
}
