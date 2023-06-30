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
	int counter1, counter2;

	for (counter1 = 0; dest[counter1] != '\0'; counter1++)
	{
		continue;
	}

	for (counter2 = 0; src[counter2] != '\0' && counter2 < n; counter2++)
	{
		dest[counter1 + counter2] = src[counter2];
	}
	dest[counter1 + counter2] = '\0';
	return (dest);
}
