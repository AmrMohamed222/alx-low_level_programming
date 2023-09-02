#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 *
 * @src: is the source string
 *
 * @dest: is the destination where to copy to
 *
 * Return: return the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';

	return (dest);
}
