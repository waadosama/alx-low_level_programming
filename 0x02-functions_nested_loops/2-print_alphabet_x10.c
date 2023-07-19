#include"main.h"
/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 print alphabet a - z
 *
*/
void print_alphabet(void)
{
int line, ch;
for (line = 1, line <= 9, line++)
{
for (ch = 'a'; ch = 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
}
