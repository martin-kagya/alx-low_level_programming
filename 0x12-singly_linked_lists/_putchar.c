#include <unistd.h>
#include "lists.h"
/**
 * _putchar - function to print a character
 * @c: character to be printed
 * Return. character to be printed
 */
int _putchar(char *c)
{
	return (write(1, &c, 1));
}
