#include "main.h"

/**
* print_line - draws a straight line in the terminal.
*
* @n : the number of times the character _ should be printed
*
* If n is 0 or less, the function should only print \n
*/

void print_line(int n)
{
	int repetition;

	for (repetition = 0; repetition < n; repetition++)
	{
		_putchar ('_');
	}
	_putchar ('\n');
}
