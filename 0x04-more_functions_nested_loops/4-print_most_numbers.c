#include "main.h"

/**
 * print_most_numbers - print 0 - 9
 *
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; ++num)
	{
		if (num != 2 && num != 4)
			putchar(num + 48);
	}
	putchar('\n');
}
