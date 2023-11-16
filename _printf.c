#include "main.h"

/**
 * _printf - prints stdin to stdout
 * @format: format identifier.
 * Return: length of the string.
 */

int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", print_str}, {"%c", print_char},
		{"%%", print_percent},
		{"%i", print_int}, {"%d", print_deci}, {"%r", print_rev_str},
		{"%R", print_rot13}, {"%b", print_binary},
		{"%u", print_unsigned_int},
		{"%o", print_octal}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_exc_string}, {"%p", print_pointer}
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				length += p[j].function(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
