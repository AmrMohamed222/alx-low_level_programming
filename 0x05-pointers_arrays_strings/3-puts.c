#include "main.h"

/**
 * _puts - Print a string, followed by a new line, to stdout.
 *
 * @str: Type char pointer
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
