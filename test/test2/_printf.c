#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - Custom printf function with limited functionality.
 * @format: Format string with conversion specifiers.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    const char *ptr;

    va_start(args, format);

    for (ptr = format; *ptr != '\0'; ptr++)
    {
        if (*ptr == '%')
        {
            ptr++; /* Move past the '%' character */

            switch (*ptr)
            {
            case 'c':
                count += _putchar(va_arg(args, int));
                break;

            case 's':
                count += string_print(args);
                break;

            case '%':
                count += _putchar('%');
                break;

            default:
                count += _putchar('%') + _putchar(*ptr);
                break;
            }
        }
        else
        {
            count += _putchar(*ptr);
        }
    }

    va_end(args);

    return count;
}
