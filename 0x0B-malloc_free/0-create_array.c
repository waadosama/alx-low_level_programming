#include "main.h"
#include <stdlib.h>
/**
 *  *create_array - creats an array of chars
 * and initializes it with a specfic char
 * @size : size of array
 * @c :char to initailize
 * Return :pointer to array initailized or NuLL
*/
char *create_array(unsigned int size, char c)
{
char *n = malloc(size);

if (size == 0 || n == 0)
return (0);
while (size--)
n[size] = c;
return (n);
}
