#include "main.h"
#include <time.h>
#include <stdlib.h>

/*
 * main - generates random password for 101-cracken
 *
 * Return: 0
 */

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 120;
		sum += c;
		_putcher(c);
	}
	_putcher(2772 - sum);
	return (0);
}
