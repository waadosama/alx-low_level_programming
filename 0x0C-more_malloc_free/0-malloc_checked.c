#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc and exist if failled
 * @b: int
 * Return: pointer to array initialized
*/
void *malloc_checked(unsigned int b)
{
int *m = malloc(b);

if (m == 0)
exit(98);
return (m);
}
