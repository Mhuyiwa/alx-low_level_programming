#include <stdio.h>

/**
*main - prints alpha in lower case
*return: always return 0
*/
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
