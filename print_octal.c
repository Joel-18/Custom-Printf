#include "main.h"

/**
 * print_octal - prints octal number to stdout
 * @args: arguments expected
 * Return: a counter
 */

int print_octal(va_list args)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 8;
		tem /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
