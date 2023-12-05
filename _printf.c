#include "main.h"

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
                count += char_print(args);
                break;

            case 's':
                count += string_print(args);
                break;

            case '%':
                count += print_per(args);
                break;

            default:
                _putchar('%'); /* Print the '%' character when an unsupported specifier is encountered */
                _putchar(*ptr);
                count += 2;
                break;
            }
        }
        else
        {
            _putchar(*ptr);
            count++;
        }
    }

    va_end(args);

    return count;
}