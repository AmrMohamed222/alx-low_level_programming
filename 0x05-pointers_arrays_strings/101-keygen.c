#include "main.h"
#include <time.h>

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
		c = rand () % 120;
		sum += c;
		putcher(c);
	}
	putcher(2772 - sum);
	return (0);
}
