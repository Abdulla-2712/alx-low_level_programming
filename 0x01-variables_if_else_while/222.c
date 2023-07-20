#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
        int x = '0', y = '0', z = '0';
        
	while (x <= '9')
	{
		y = '0';
		while (y <= '9')
		{
			if (y > x)
			{
                           :wq    z = '0';
                                while (z <= '9')
                                {
                                        if (z > y)
                                        {
                                                putchar(x);
                                                putchar(y);
                                                putchar(z);
                                                putchar(',');
                                                putchar(' ');
                                        }
                                        z++;
                                }
                        }
                        y++;
                }
                x++;
        }
        putchar('\n');
        return (0);
}
