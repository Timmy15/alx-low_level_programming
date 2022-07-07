#include "main.h"

/**
 * main - Define the function
 *
 * _isupper - check if letter is uppercase
 *
 * @c: print int
 *
 * Return: 1 if c is uppercase, 0 if otherwise
 *
 */

int _isupper(int c)

{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
