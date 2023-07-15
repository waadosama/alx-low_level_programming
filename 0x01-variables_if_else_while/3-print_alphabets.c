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
	while (ch <= 'z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
