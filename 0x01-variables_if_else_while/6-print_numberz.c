#include <stdio.h>


/**
* main - this is my function
*
* Return: 0 when successfull
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
