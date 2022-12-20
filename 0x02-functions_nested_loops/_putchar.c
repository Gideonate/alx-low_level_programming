#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes char c to stdout
 * @c: The character printed
 *
 * Return: On success 1.
 * -1 on fail
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

