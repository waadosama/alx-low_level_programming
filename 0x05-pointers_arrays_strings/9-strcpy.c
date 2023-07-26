#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 *@dest: char type string
 * @src: char type string
 * description : copy the string pointed to by pointers 'src'to
 * the buffer pointed to by 'dest'
 * Return: pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
int i = -i;

do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
