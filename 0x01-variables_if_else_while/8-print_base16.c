#include <stdio.h>

/**
* main - this is my function
*
* Return: 0 when successfull
*/

int main(void)
{
	int i;
	char a[16] = "0123456789abcdef";
	char b;

	i = 0;
	while (i < 16)
	{
		b = a[i];
		putchar(b);
		i++;
	}
	putchar('\n');
	return (0);
}
