#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

void print_c(va_list c);
void print_int(va_list i);
void print_f(va_list f);
void print_s(va_list s);


#include <stdio.h>
typedef struct types
{
	char *valid;
	void (*f)();
} d_type;
int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
