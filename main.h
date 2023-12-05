#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int char_print(va_list val);
int string_print(va_list val);
int stringlen(char *a);
int print_per(void);
#endif