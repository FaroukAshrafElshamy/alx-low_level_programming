#include "main.h"
#include <stddef.h>
/**
 * _strlen - Entry point
 * @s: input
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == '\0')
			return (i);
	}
	return (0);
}
