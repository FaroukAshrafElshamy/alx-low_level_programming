#include "main.h"

/**
*binary_to_unit - converts binary number to unsigned int
*@b: pointing to a string
*Return: converted number or 0
*/

unsigned int binary_to_unit(const char *b)
{
	int x;
	unsigned int z;

	z = 0;
	if (!b)
	{
		return (0);
	{
	else
	{
		for (x = 0; b[i] != '\0'; x++)
		{
			z <<= 1;
			if (b[i] == '1')
			{
				z += 1;
			}
		}

		for (x = 0; b[i] != '\0'; x++)
		{
			if (b[i] != '0' && b[i] != '1')
			{
				return (0);
			}

		}
	}
	return (z);
}
