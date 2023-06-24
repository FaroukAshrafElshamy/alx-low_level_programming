#include "main.h"

#include"main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 *		can only use putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int num, row, count;

	for (row = 1; row <= 10; ++row)
	{
		for (count = 0; count <= 14; ++count)
		{
			num = count;
			if (count > 9)
			{
				putchar(1 + 48);
				num = count % 10;
			}
			putchar(num + 48);
		}
		putchar('\n');
	}
}
