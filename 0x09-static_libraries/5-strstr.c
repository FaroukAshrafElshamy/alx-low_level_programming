#include "main.h"	
#include <stddef.h>

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	for (; haystack[i] != '\0'; i++)
	{
		for (; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
				return (haystack + i);
		}
	}
	return ('\0');
}
