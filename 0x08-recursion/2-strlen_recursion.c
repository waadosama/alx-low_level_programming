#include "main.h"
/**
 * _strlen_recursion : prints the lenght of the string
 *@s :lenght of the string
 * Return : void
*/
int _strlen_recursion(char *s)
{
int ntr = 0;
if (*s > '\0')
{
ntr += _strlen_recursion(s + 1) + 1;
}
return (ntr);
}
