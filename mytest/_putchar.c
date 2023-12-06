#include "main.h"

/**
 * _putchar - writes the character c to sys
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}