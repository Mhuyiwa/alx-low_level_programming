#include <unistd.h>

/**
 * this is my _putchar.c
 */

int _putchat(char c){
	return write(STDOUT_FILENO, &c, 1);
}
