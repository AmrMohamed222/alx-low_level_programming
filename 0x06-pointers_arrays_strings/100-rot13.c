#include "main.h"

/**
 * rot13 - encodes strings using rot13 by moving with 13 char.
 *
 * @s: pointer to string.
 *
 * Return: pointer to encoded string.
 */

char *rot13(char *s)
{
	int a, b;

	char sera[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char serb[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		for (b = 0; sera[b] != '\0' ; b++)
		{
			if (s[a] == sera[b])
			{
				s[a] = serb[b];
				break;
			}
		}
	}
	return (s);
}
