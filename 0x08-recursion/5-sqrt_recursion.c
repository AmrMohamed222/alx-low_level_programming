#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

