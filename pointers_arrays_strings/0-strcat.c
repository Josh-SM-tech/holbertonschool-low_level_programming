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

	/* 1. Move 'i' to the end of the dest string (find the '\0' */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* 2. Append the src string to dest starting at index 'i' */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* 3. Add the terminating null byte at the new end */
	dest[i] = '\0';

	return (dest);
}
