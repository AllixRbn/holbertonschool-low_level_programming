#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: The destination string to which the source string is appended
 * @src: The source string to be appended to the destination string
 *
 * Return: A pointer to the resulting concatenated string (dest)
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
