#include "main.h"

/**
* main - this is my function
*
* Return: 0 when successfull
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
