#include "main.h"

/**
 * char_print - Prints a character.
 * @val: Argument list.
 * Return: Number of characters printed (always 1).
 */
int char_print(va_list val)
{
    char character;

    character = va_arg(val, int);
    _putchar(character);
    return 1;
}