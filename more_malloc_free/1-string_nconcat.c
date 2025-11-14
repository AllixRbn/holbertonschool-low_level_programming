#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	int i, len;
	char *strstr;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	strstr = malloc((len + 1) * sizeof(char));

	if (strstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		strstr[i] = str[i];
	}
	strstr[len] = '\0';
	return (strstr);
}
