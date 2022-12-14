#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int c = 0;
	int f_d;
	int i_d;

	int c2;
	int f_d2;
	int i_d2;

	while (c <= 98)
	{
		f_d = (c / 10 + '0');
		i_d = (c % 10 + '0');
		c2 = 0;
		while (c2 <= 99)
		{
			f_d2 = (c2 / 10 + '0');
			i_d2 = (c2 % 10 + '0');

			if (c < c2)
			{
				putchar(f_d);
				putchar(i_d);
				putchar(' ');
				putchar(f_d2);
				putchar(i_d2);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
