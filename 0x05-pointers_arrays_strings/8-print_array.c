#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @k: array name
 * @n: is the number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *k, int n)
{
	int i;
	for (i = 0; i < (n -1); i++)
	{
		printf("%d, ", k[1]);
	}
		if (i == (n - 1))
		{
			printf("%d", k[n -1]);
		}
			printf("\n");
}
