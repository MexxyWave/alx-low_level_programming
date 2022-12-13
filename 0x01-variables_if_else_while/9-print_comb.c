#include <stdio.h>
/**
 * main - prints single digit
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n);
	if (n < 9)
	{
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
