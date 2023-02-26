#include <stdio.h>

/**
 * main - print all combination of single digit
 * return: always 0
 */
int main(void)
{
	int n;
	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
