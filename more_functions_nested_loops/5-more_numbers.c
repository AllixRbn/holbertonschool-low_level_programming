#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int line;
	int single;

	for (line = 0; line < 10; line++)
	{
		for (single = 0; single <= 14; single++)
		{
			if (single >= 10)
			{
				_putchar ((single / 10) + '0');
			}
			_putchar ((single % 10) + '0');
		}
	_putchar ('\n');
	}
}
