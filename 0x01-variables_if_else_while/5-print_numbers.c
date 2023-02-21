#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10,
 * starting from 0, followed by a new line,
 * Return: Always 0 (Success)
 */
int main(void)
{

	int n = 0;

	while (n < 10)
	{
		printf("%i", n);
		n++;
	}
	putchar('\n');
	return (0);
}
