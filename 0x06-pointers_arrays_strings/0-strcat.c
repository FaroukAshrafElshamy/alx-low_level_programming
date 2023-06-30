#include "main.h"
#include <stdio.h>
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
		printf(dest);
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		printf(dest);
		printf(src);
		dest++;
		src++;
	}
	*dest = '\0';
	return (ch);
}
