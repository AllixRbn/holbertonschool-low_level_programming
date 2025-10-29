#include "main.h"

/**
 * main - prints the numbers from 1 to 100
 * for multiples of three prints Fizz
 * for multiples of five prints Buzz
 * for multiples of both three and five prints FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			_putchar ('F');
			_putchar ('i');
			_putchar ('z');
			_putchar ('z');
			_putchar ('B');
			_putchar ('u');
			_putchar ('z');
			_putchar ('z');
			_putchar (' ');

		} else if (num % 3 == 0)
		{
			_putchar ('F');
			_putchar ('i');
			_putchar ('z');
			_putchar ('z');
			_putchar (' ');

		} else if (num % 5 == 0)
		{
			_putchar ('B');
			_putchar ('u');
			_putchar ('z');
			_putchar ('z');
			_putchar (' ');
		} else
		{
			_putchar (num / 10 + '0');
			_putchar (num % 10 + '0');
			_putchar (' ');
		}
	}
	return (0);
}
