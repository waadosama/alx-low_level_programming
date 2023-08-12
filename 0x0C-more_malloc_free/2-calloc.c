#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * *_memset-files memory with a constant byte.
 * @s : pointer to put constant
 * @b :constant
 * @n : max bytes to use
 * Return : s
*/
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n--)
*s++ = b;

return (ptr);
}
/**
 * *_calloc-allocates memory for array, using malloc.
 * @nmemb : array lenght
 * @size : size of each element
 * Return : pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *m;

if (size == 0 || nmemb == 0)
return (NULL);
m = malloc(sizeof(int) * nmemb);
if (m == 0)
return (NULL);
_memset(m, 0, sizeof(int) * nmemb);

return (m);
}
