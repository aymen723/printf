#include "main.h"
/**
 * string_print - a func to print str.
 * @val: args.
 * Return: the len of str.
 */

int string_print(va_list val)
{
    char *s;
    int i, len;

    s = va_arg(val, char *);
    if (s == NULL)
    {
        s = "(null)";
        len = _strlen(s);
        for (i = 0; i < len; i++)
            _putchar(s[i]);
        return (len);
    }
    else
    {
        len = _strlen(s);
        for (i = 0; i < len; i++)
            _putchar(s[i]);
        return (len);
    }
}