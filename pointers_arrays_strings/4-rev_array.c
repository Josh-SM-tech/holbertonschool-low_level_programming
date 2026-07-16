#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: An array of integers to be reversed.
 * @n: The number of elements in the array.
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
