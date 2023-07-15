#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: print all alphabet
 *
 * Return: 0 (success)
*/
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
        {
		putchar(ch);
	        ch++;
	}
	while (ch <= 'Z')
        {   
		putchar(ch);
	        ch++;
        }
	putchar('\n');
	return (0);
}
