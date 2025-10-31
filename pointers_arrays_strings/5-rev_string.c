#include "main.h"

/**
* rev_string - reverses a string
* @s: string to reverse
*/
void rev_string(char *s)
{
	int rev = 0;
	char *start = s;
	char *end;
	char temp;

	while (*s != '\0')
	{
		rev++;
		s++;
	}

	end = start + rev - 1;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
