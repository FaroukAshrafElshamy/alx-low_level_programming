#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int h, b;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (h = 1; h <= size; ++h)
		{
			for (b = 1; b <= size; ++b)
			{
				if (h + b <= size)
				{
					putchar(' ');
				}
				else
				{
					putchar('#');
				}
			}
			putchar('\n');
		}
	}
}
