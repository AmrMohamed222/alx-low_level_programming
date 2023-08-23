#include "main.h"

/**
 * reverse_array - Function that reverse the content of an array of int
 *
 * @a: Type int
 *
 * @n: Type int
 *
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i, flag;

	i = 0;
	n = n - 1;
	while (i < n)
	{
		flag = a[i];
		a[i] = a[n];
		a[n] = flag;
		i++;
		n--;
	}
}
