#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: print all single number
 *
 * Return: 0 (success)
*/
int main(void)
{
	int digit = 0;

	while (digit  <= 9)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
