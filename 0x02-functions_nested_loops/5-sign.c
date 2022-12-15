#include "main.h"
/**
 * print_sign - print the sign of a number
 * @c: int to check
 * Return: print + if n is greater than zero
 * print 0 if n is zero
 * print - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
