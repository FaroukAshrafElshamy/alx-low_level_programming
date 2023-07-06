#include "main.h"
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
		return (0);
	}
	putchar(*s);
	_puts_recursion(++s);
}
