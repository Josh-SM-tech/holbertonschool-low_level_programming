#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: The destination buffer.
 * @src: The string to be copied.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* Copy bytes from src to dest until n is reached or src ends */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Pad the remaining bytes in dest with null bytes if necessary */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
