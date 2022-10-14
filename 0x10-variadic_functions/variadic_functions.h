#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
/**
 * struct format_t - Struct format_t
 *
 * @type: The type of elemented to be formatted.
 * @f: A function pointer to a function that
 * take av_list from stdarg.h
 */

typedef struct format_t
{
	char *type;
	void (*f)(va_list arg);
} format_t;

void print_char(va_list arg);
void print_float(va_list arg);
void print_char(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

#endif
