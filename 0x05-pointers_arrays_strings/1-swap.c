#include "main.h"

/**
 * swap_int - swaps the values of
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int m;
	m = *a;
	*a = *b;
	*b = m;
}
