#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area where bytes are copied to
 * @src: source memory area where bytes are copied from
 * @n: number of bytes to copy
 *
 * Return: a pointer to the destination memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
