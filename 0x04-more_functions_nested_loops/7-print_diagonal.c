#include "main.h"

/**
 * print_line - check the code.
 *
 * @n: variable
 *
 * Return: Always
 */

void print_diagonal(int n)
{
	int x, z;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (z = 1; z < x; z++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
