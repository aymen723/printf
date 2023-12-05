#include "main.h"

/**
 * _strlenc - finds length of a string but for constant characters
 * @s: string
 * Return: integer
 */

int stringlenc(const char *a)
{
    int length = 0;

    while (a[length] != '\0')
    {
        length++;
    }

    return length;
}
