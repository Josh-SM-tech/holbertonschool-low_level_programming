#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string, or 0 if no numbers.
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int res = 0;
	int sign = 1;
	int count = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = (res * 10) + (s[i] - '0');
			count = 1;
		}
		else if (count == 1)
		{
			break;
		}
		i++;
	}

	return (res * sign);
}
