#include "main.h"

/**
 * print_rev - Print a string, in reverse followed by a new line.
 *
 * @str: Type char pointer
 *
 * Return: Always 0.
 */

void print_rev(char *str)
{
	int a = 0;
	int b;

	while (1)
	{
		if (*(str + a) == '\0')
			break;

		else
			a++;
	}
	for (b = a - 1; b >= 0; b--)
		_putchar(str[b]);
	_putchar('\n');
}
