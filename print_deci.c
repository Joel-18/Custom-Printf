#include "main.h"

/**
 * print_deci - prints decimals
 * @args: input arguments to be printed
 * Return: number of integers printed
 */

int print_deci (va_list args)
{
	int n = va_arg(args, int);
	int num, last = n, exp; 
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
		}
	}
}
