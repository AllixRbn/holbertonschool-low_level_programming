#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
*
* @n : the number of times the character \ should be printed
*
* If n is 0 or less, the function should only print a \n
*/

void print_diagonal(int n)
{
	int column, space;

	for (column = 0; column < n; column++)
	{
		for (space = 0; space < column; space++)
		{
			_putchar (' ');
		}
		_putchar ('\\');
	}
	_putchar ('\n');
}
