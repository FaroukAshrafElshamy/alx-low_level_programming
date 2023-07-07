#include "main.h"
/**
 * _isdigit - cheak if char is digit or not.
 * @c : the char.
 * Return: 1 if is digit otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
