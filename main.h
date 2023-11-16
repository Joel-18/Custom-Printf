#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
}convert;

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int _strlenc(const char *s);


int print_char(va_list args);
int print_string(va_list args);
int print_%(void);
int print_int(va_list args);
int print_deci(va_list args);
int print_octal(va_list args);
int print_unsigned_int(va_list args);
int print_binary(va_list args);
int print_pointer(va_list args);
int print_rev_str(va_list args);
int print_rot13(va_list args);
int print_hex_extra(unsigned long int num);
int print_hex(va_list args);
int print_exc_string(va_list args);
int print_HEX_extra(unsigned int num);
int print_HEX(va_list args);




#endif
