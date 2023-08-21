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

	while (1)
	{
		if (*(str + i) == '\0')
			break;
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
