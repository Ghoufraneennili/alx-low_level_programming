#include "main.h"

/**
 * print_rev - print in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int counter = 0;

	int i;

	while (*s != '\0' ; s++)
	{
		counter++;
	}
	s--;
	for (i = counter ; i > 0 ; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');

}
