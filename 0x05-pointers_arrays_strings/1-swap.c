#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: integer value
 * @b: integer value
 */
void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
