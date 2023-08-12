#include <stdio.h>

/**
* main - this is my function
*
* Return: 0 when successfull
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
