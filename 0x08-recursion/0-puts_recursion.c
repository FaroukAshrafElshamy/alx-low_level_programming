#include "main.h"
#include <stdio.h>
/**
 *_puts_recursion - print a string
 *
 *@s: char
 *
 *Return: Always (0)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	putchar(*s);
	_puts_recursion(++s);
}
