#include "main.h"
/**
 *_strncpy - function that copies
 *           two string
 *
 * @dest: pointer to destnation input
 * @src : pointer to source input
 *@n: bytes of @src
 *
 * Return:@dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
while (i < n)
{
des[i] = '\0';
i++;
}
return (dest);
}
