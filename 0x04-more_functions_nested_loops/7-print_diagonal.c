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
	int x;
	int z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (z = 0; z < a; z++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
