#include "main.h"

/**
 * _strcat - concatinate
 * @dest: char
 * @src: char
 * Return:pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *ch = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ch);
}
