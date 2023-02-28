#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * return:0
 */
void print_re(char *s)
{
	int len = 0;
	int k;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (k = len; k > 0; k--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
