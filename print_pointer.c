#include "main.h"

/**
 * print_pointer - prints a hexa-decimal.
 * @args: arguments  expected
 * Return: a counter
 */

int print_pointer(va_list args)
{

	char *s = "(nil)";
	void *p;
	long int x;
	int i;
int y;

	p = va_arg(args, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	y = print_hex_extra(x);
	return (y + 2);
}
