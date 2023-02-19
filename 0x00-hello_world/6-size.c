#include <stdio.h>
/**
*main - C program that prints the size of various types on the computer it is compiled and run on
*Return: Always return 0
*/
int main(void)
{
	char c;
	int x;
	long int l;
	long long int d;
	float f;
printf("size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
printf("size of an int: %lu byte(s)\n", (unsigned long) sizeof(x));
printf("size of an long int: %lu byte(s)\n", (unsigned long) sizeof(l));
printf("size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(d));
prinf("size of float: %lu byte(s)\n", (unsigned long) sizeof(f));
return (0);
}
