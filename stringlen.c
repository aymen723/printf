#include "main.h"

/**
 * stringlen - finds the length of a string.
 * @a: str
 * Return: int.
 */

int stringlen(char *a)
{
    int length = 0;

    while (a[length] != '\0')
    {
        length++;
    }

    return length;
}
