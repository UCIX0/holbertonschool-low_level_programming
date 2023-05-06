#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>


/**
 * struct printer - estructura para asociar símbolos y funciones de impresión
 * @symbol: símbolo que representa el formato de impresión
 * @print: función de impresión correspondiente al símbolo dado
*/
typedef struct printer
{
char *symbol;
void (*print)(va_list arg);
} printer_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

#endif
