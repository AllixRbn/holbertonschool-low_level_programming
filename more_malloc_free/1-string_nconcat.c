#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings, using at most n bytes from s2
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes to use from s2
 *
 * Return: A pointer to the newly allocated concatenated string
 * If memory allocation fails, the function returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concat;

	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}

	if (n < len2)
	{
		len2 = n;
	}

	concat = malloc_checked(len1 + len2 + 1);
	if (!concat)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';

	return (concat);
}
