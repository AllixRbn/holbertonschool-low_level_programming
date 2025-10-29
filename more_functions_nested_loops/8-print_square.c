#include "main.h"
/**
 * print_square - prints a square followed by a new line
 *
 * @size: size of the square
 *
 *If size is 0 or less, the function should print only a new line
 */
void print_square(int size)
{
	int line, hashtag;

	for (line = 0; line < size; line++)
	{
		for (hashtag = 0; hashtag < size; hashtag++)
		{
			_putchar ('#');
		}
		_putchar ('\n');
	}
	if (size <= 0)
	{
		_putchar ('\n');
	}
}
