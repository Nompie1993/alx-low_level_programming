#include <stdio.h>

/**
 * _putchar - written the character c to stdout
 * Return : on success 1.
 * On error, -1 returned 
 */
int _putchar(char c)
{
	return (write(1,&c,1));

}
