#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */

int _printf(const char *const format, ...)
{
    convert p[] = {
        {"%s", string_print}, {"%c", char_print}, {"%%", print_per}};

    va_list args;
    int i = 0, j, length = 0;
    int found = 0; // Move the declaration outside of the loop

    va_start(args, format);
    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    while (format[i] != '\0')
    {
        found = 0; // Reset the flag for each iteration
        j = 13;
        while (j >= 0)
        {
            if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
            {
                length += p[j].function(args);
                i = i + 2;
                found = 1;
                break;
            }
            j--;
        }

        if (!found)
        {
            _putchar(format[i]);
            length++;
            i++;
        }
    }

    va_end(args);
    return (length);
}