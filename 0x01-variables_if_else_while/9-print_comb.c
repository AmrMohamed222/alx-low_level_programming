#include <stdio.h>

/**
* main - this is my function
*
* Return: 0 when successfull
*/

int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
	if (i != '9')
	{
		putchar(',');
		putchar(' ');
	}
		i++;
	}
	putchar('\n');
	return (0);
}
