#include "main.h"
/**
 * _islower - the character
 * @c: the character to be checked
 * Return: 1 if letter is lowercase, otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
