#include "main.h"

/**
 * _strlen - finds the length of a sring
 * @s: string to be counted
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}

/**
 * _strlenc - finds the length of a constant string
 * @s: string to be counted
 * Return: length of the string
 */

int _strlenc(const char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[1] != '\0' ; i++)
		count++;
	return (count);
}
