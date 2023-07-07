#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest : the string to be appended to.
 * @src : the string to be appended.
 * @n : the number of bytes to be appended.
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
