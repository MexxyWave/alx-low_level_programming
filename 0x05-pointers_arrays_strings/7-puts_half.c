#include "main.h"

/**
 * puts_half - function that prints half string
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int a, n, ind;

	ind = 0;

	for (a = 0; str[a] != '\0'; a++)
		ind++;

	n = (ind / 2);

	if ((ind % 2) == 1)
		n = ((ind + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
