#include "main.h"

/**
 * print_numbers - print 0 - 9
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int num = 0;

	do {
		putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	putchar('\n');
}
