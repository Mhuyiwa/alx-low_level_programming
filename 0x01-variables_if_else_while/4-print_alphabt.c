#include <stdio.h>

/**
 * main - main prints the alphabet in lowercase
 * Return: always return 0
 */

int main(void)
{
	char la;

	for  (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');
	return (0);
}
