#include "main.h"
/**
 * puts_half - prints second half of a string
 * @str : char array string type
 * description :if odd numbers of chars, print [lenght - 1] / 2
*/
void puts_half(char *str)
{
int i;

for (i = 0; str[i] != 0; i++)

i++;
for (i /= 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
