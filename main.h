#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_func(char specifier)) (va_list);
int print_char(va_list);
int print_reverse(va_list);
int print_d(va_list args);
int count_chars(int n);
int rot13(va_list args);
int print_b(va_list args);
void int_to_bin(int n, int *i);
void int_to_hex(unsigned int n, int *i);
int print_x(va_list args);
int print_X(va_list args);
int print_S(va_list args);
int print_s(va_list args);

#endif
