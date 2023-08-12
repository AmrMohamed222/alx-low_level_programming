#include <stdio.h>

/**
* main - this is my function
*
* Return: 0 when successfull
*/

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'e' && l != 'q')
			putchar(l);
	}

	putchar('\n');
	return (0);
}
