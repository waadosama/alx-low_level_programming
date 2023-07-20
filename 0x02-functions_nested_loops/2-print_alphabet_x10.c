#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */
void _islower(void )
{
	if (int c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
