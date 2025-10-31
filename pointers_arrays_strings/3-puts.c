#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string to print
 */
void _puts(char *str)
{
	int prnt = 0;

	while (str[prnt] != '\0')
	{
		_putchar (str[prnt]);
		prnt++;
	}
	_putchar ('\n');
}
