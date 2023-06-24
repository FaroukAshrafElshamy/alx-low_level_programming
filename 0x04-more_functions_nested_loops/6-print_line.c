#include"main.h"

/**
 * print_line - print a straight line
 * @n: is the number of times the _ character should printed
*/

void print_line(int n)
{
	int ch;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (ch = 1; ch <= n; ch++)
			putchar('_');
		putchar('\n');
	}
}
