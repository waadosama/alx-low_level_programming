#include "main.h"

/**
 * swap_int - swaps  the value of two intgers
 *            using two imputs parmater
 *
 * @a : input parmater 1
 * @b : input parmatr 2
 *
 * Return : Nothing
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
