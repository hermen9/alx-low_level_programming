#include "main.h"

/**
 * swap_int - swaps tow int nums
 *
 * @a: 1st num
 * @b: 2nd num
 *
 * Return: (0)
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
