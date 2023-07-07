#include "main.h"

/**
 * _strcpy - Entry point
 * @dest: input
 * @src: input
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
