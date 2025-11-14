#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (0);

	array = malloc(sizeof(char) * size);
	if (array == 0)
		return (0);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
