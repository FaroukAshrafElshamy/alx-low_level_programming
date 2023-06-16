#include <stdio.h>
/**
 *main - Entry point
 *
 *decription: print a string
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch1;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
	}

	for (ch1 = 'a'; ch1 <= 'f'; ch1++)
	{
		putchar(ch1);
	}

	putchar('\n');
	return (0);
}
