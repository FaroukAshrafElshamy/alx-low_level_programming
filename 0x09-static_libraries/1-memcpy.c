#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest : the memory area to be filled.
 * @src : the constant byte to fill the memory area with.
 * @n : the number of bytes to be filled starting from the
 *    beginning of the memory area.
 * Return: a pointer to the memory area s.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
