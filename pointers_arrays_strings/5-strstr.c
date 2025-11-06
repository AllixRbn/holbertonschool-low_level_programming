#include "main.h"

/**
 * _strstr - locates h substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int h, n;

	for (h = 0; haystack[h] != '\0'; h++)
	{
		for (n = 0; needle[n] != '\0'; n++)
		{
			if (haystack[h + n] != needle[n])
				break;
		}
		if (needle[n] == '\0')
			return (haystack + h);
	}
	return (0);
}
