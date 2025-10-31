#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int rev = 0;

	while (s[rev] != '\0')
	{
		_putchar (s[rev]);
		rev++;
	}
	_putchar('\n');
	for (rev--; rev >= 0; rev--)
	{
		_putchar (s[rev]);
	}
	_putchar('\n');
}
