#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1, ...., 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + '0');
		if (d != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++digit;
	}
	putchar('\n');

	return (0);
}
