#include "main.h"

/**
 * _strcat - Concentrates two strings.
 * @dest: The destination string that will be appended to.
 * @src: The source string to append.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* Find the end of the dest string */
	while (dest[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add the terminating null byte */
	dest[i] = '\0';

	return (dest);
}
