#include <stdio.h>
/**
*main - C program that prints the size of various types on the computer it is compiled and run on
*Return: Always return 0
*/
int main(void)
{
printf("size of a char: %lu byte(s)\n", sizeof(char));
printf("size of an int: %lu byte(s)\n", sizeof(int));
printf("size of an long int: %lu byte(s)\n", sizeof(long int));
printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
prinf("size of float: %lu byte(s)\n", sizeof(float));
return (0);
}
