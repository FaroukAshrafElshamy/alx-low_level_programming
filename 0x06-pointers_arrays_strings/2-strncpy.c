#include "main.h"

/**
 *_strncpy - Concatinate 2 strings V2
 *
 *@dest: the first string
 *@src: the second string that will be splited
 *@n: length of string
 *
 *Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int counter1;

	for (counter1 = 0; counter1 < n && *(src + counter1); counter1++)
	{
		*(dest + counter1) = *(src + counter1)
	}

	for (;counter1 < n; counter1++)
	{
		*(dest + counter1) = '\0';
	}
	return (dest);
}
