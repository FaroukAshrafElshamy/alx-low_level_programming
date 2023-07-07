#include "main.h"

/**
 * _isupper -  cheak if char is upper or not.
 * @c : rhe char.
 * Return: 1 if is uper otherwise 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

