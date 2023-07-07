#include "main.h"
#include <stddef.h>

/**
 * _puts - Entry point
 * @str: input
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int i = 0;

	for (; str[i] >= '\0'; i++)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			return;
		}
		_putchar(str[i]);
	}
}
