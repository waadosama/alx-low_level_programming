#include <stdio.>
/**
 * main - print number of argument passed
 * @argc :numbers of commad line arguments
 * @argv : pointer to an array of commad line arguments
 * Return: 0-succes, non zero-fail .
*/
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
