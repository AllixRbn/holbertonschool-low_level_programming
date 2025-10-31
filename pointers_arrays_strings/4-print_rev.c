#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int strng = 0;

	while (s[strng] != '\0')
	{
		strng++;
	}
	for (strng--; strng >= 0; strng--)
	{
		_putchar (s[strng]);
	}
	_putchar ('\n');
}
