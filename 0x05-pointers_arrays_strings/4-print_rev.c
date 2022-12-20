#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string parameter
 * Return: Nothing
 */

void print_rev(char *s)
{
	int index = 0;
	int o;

	while (*s != '\0')
	{
		index++;
		s++;
	}

	s--;

	for (o = index; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
