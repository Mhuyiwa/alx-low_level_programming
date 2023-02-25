#include <stdio.h>

/**
 * Main - print alphabet in lowerest case
 * Return: Always 0
 */
int main(void)
{
	char le;
	for (le = 'z'; le >= 'a'; le--)
		putchar(le);
	putchar('\n');
	return (0);
}
