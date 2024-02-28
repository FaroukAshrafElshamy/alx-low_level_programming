#include <main.h>
#include <unistd.h>
/**
 * _putchar - write the characters to stdout
 * @c: character to print
 * Return: 1 on success else -1
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}
