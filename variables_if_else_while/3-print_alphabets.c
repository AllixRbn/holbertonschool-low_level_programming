#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and then uppercase
 * Return: 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
